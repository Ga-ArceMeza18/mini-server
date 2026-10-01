# Mini-Server

Estudiante: Gabriel Arce Meza
Carnet: C5C632


## Versiones de Server

### Server Unsafe

Implementación del servidor pero con condiciones de carrera y sin ningún control del flujo de las solicitudes de entrada.


### Server Safe

Aplicación de mutex a la versión de server unsafe para eliminar la condición de carrera.


### Server Producer-Consumer

Implementación del servidor pero aplicando el patrón Producer-Consumer donde el Producer acepta solicitudes del cliente y las envía a una cola mediante el control de mutex que bloquea cuando la cola está llena. Y uno o varios Consumers que toman solicitudes de la cola mediante el control de mutex para bloquear y desbloquear cada hilo cuando dos o más Consumers acceden a una misma solicitud.


### Server Semaphore

Versión modificada del server Producer-Consumer pero con la implementación de semáforos para controlar el espacio disponible en la cola cuando los Producers intentan añadir una solicitud y cuando los Consumers esperan por una solicitud en la cola. También se utiliza mutex para proteger la cola cuando los Producers y Consumers realizan las operaciones enqueue() y dequeue() para evitar una condición de carrera.