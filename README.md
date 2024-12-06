# Proyecto-Final-Sistemas-de-Vision-Industrial

# Control de Matriz LED con Gestos de Mano y Arduino
Este proyecto utiliza visión por computadora para detectar gestos de mano y controlar un módulo de matriz LED (MAX7219) conectado a un Arduino. Los gestos detectados determinan qué número se muestra en la matriz LED.

## Descripción

El programa Python utiliza OpenCV para capturar y procesar los gestos de la mano en tiempo real. Según el número de dedos detectados, se envía un comando al Arduino mediante comunicación serial. El Arduino recibe este comando y muestra el número correspondiente en la matriz LED.

## Requisitos

### Hardware
- Placa Arduino (cualquier modelo compatible con MAX7219).
- Módulo de matriz LED 8x8 controlado por MAX7219.
- Cámara web.
- Cable USB para conectar el Arduino.

### Software
- Python 3.8 o superior.
- Arduino IDE.

## Cómo ejecutar

### 1. Configura el hardware
- Conecta el módulo de matriz LED 8x8 al Arduino utilizando los siguientes pines:
  - **DIN** al pin digital 12.
  - **CS** al pin digital 11.
  - **CLK** al pin digital 10.
- Asegúrate de que el Arduino esté conectado a tu computadora mediante un cable USB.

### 2. Configura el Arduino
- Abre el [Arduino IDE](https://www.arduino.cc/en/software).
- Copia el código proporcionado en el archivo `arduino_code.ino`.
- Selecciona el puerto COM de tu Arduino:
  1. Ve a **Herramientas > Puerto**.
  2. Selecciona el puerto donde está conectado tu Arduino.
- Carga el código en tu Arduino haciendo clic en el botón de "Subir" (ícono de flecha hacia la derecha).

### 3. Configura el entorno Python
- Asegúrate de tener [Python 3.8 o superior](https://www.python.org/) instalado.

### 4. Ejecuta el Código

### 5.  Interactúa con el sistema
- 0 dedos: Se mostrará el número 0 en la matriz LED.
- 1 dedo: Se mostrará el número 1 en la matriz LED.
- 2 dedos: Se mostrará el número 2 en la matriz LED.

### 6. Ciera el programa
- Presionando el botón X

  
### Librerías de Python
Instala las siguientes librerías:
```bash
pip install numpy opencv-python pyserial




