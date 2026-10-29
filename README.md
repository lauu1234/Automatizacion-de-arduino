
# Automatizacion de arduino
problemática

Muchas personas riegan sus plantas sin saber cuánta humedad tiene la tierra, lo que puede provocar que reciban demasiada o muy poca agua. Además, regarlas manualmente requiere tiempo y atención.

Para solucionar este problema, se propone crear un sistema de riego automático con un sensor de humedad, un potenciómetro y Arduino. El sensor mide la humedad de la tierra, mientras que el potenciómetro permite regular el nivel de humedad deseado. Cuando la tierra está demasiado seca, Arduino activa una bomba de agua y, cuando alcanza el nivel establecido, la apaga.


# Elementos 
Arduino UNO R3 SMD (CH340G) + usb : 11.329,49

MH10CM pack 40 cables dupont macho-hembra/10cm: 3.100

LED Difusa 5mm x 10 unidades por color :1.950,51

potenciometro: prestado

# Requerimientos funcionales y no funcionales

Requerimientos No Funcionales

(Cómo debe funcionar y cumplir sus condiciones)
• Rapidez: El LED debe prenderse o apagarse de inmediato (en menos de un pestañeo) al mover el potenciómetro.
• Seguridad: El LED debe llevar una resistencia para que no reciba demasiada energía y no se queme.
• Simplicidad: Debe funcionar usando muy pocas piezas: solo la placa (como Arduino), el potenciómetro, el LED y los cables.
• Energía: Debe poder funcionar conectado directamente al puerto USB de la computadora o con una batería pequeña (5 voltios).



Requerimientos Funcionales
• Leer el potenciómetro: El sistema debe medir cuánto has girado la perilla del potenciómetro para usarlo como si fuera el nivel de humedad.
• Calcular el porcentaje: Debe transformar ese giro en un número (por ejemplo, de 0% a 100% de humedad).
• Revisar el límite: Debe comparar ese número con un límite de alerta (por ejemplo, si baja de 30% significa que está "seco").
• Prender el LED: El foco LED debe encenderse automáticamente cuando la humedad sea muy baja.
• Apagar el LED: El foco LED debe apagarse cuando gires la perilla hacia un nivel de humedad seguro.
