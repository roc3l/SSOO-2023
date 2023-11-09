#include <stdio.h>
#include <pthread.h> 

int a=0;
pthread_mutex_t mute;       //inicializar mutex
pthread_barrier_t barrera;   //inicializar barrer

void *hilos(){
    pthread_mutex_lock(&mute);              //empezamos mutex

    pthread_t id = pthread_self();
    printf("el hilo %lu esta ingresando al recurso compartido\n",id);

    a=a+3;                                  //operacion matematica compleja
    printf("Resultado de la operacion: %d\n",a);


    printf("el hilo %lu esta saliendo del recurso compartido\n",id);
    pthread_mutex_unlock(&mute);            //cerramos mutex
    pthread_barrier_wait(&barrera);         //empezamos barrera

    pthread_exit(0);
}

int main(){

    pthread_t hilo1,hilo2,hilo3;        //declaramos
    pthread_mutex_init(&mute,NULL);
    pthread_barrier_init(&barrera,NULL,3);

    pthread_create(&hilo1, NULL, (void*)hilos, NULL);     //asignamos la funcion a los hilos  
    pthread_create(&hilo2, NULL, (void*)hilos, NULL);
    pthread_create(&hilo3, NULL, (void*)hilos, NULL);

    pthread_join(hilo1, NULL);              //join
    pthread_join(hilo2, NULL);
    pthread_join(hilo3, NULL);

    pthread_mutex_destroy(&mute);           //destruimos mutex y barrier
    pthread_barrier_destroy(&barrera);

    return 0;
}