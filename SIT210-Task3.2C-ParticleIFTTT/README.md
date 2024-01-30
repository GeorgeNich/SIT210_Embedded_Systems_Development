# Light Exposure Detector

![GitHub](https://img.shields.io/github/license/GeorgeNich/SIT210-Task3.2C-ParticleIFTTT)
![GitHub last commit](https://img.shields.io/github/last-commit/GeorgeNich/SIT210-Task3.2C-ParticleIFTTT)
![GitHub repo size](https://img.shields.io/github/repo-size/GeorgeNich/SIT210-Task3.2C-ParticleIFTTT)

This repository contains a simple Arduino code for a light exposure detector that can be used to measure ambient light levels and publish the data to the Particle Cloud when the light exposure surpasses a predefined threshold.

## Table of Contents

- [Introduction](#introduction)
- [Hardware Requirements](#hardware-requirements)
- [Setup](#setup)
- [Usage](#usage)
- [License](#license)

## Introduction

The Light Exposure Detector is a basic project that uses a photoresistor to measure light intensity. When the light exposure surpasses a predefined threshold, the onboard LED will turn on and a message will be published to the Particle Cloud indicating "Sunlight." When the light exposure is below the threshold, the LED will turn off, and a message indicating "No Sunlight" will be published.

This project can be a starting point for various applications such as smart lighting, sunlight tracking, or any other project where light detection is required.

## Hardware Requirements

To run this project, you will need the following components:

- Particle device (e.g., Particle Photon or Particle Electron)
- Photoresistor
- 10k ohm resistor
- Breadboard and jumper wires

## Setup

Follow these steps to set up the Light Exposure Detector:

1. Connect the components as follows:
   - Connect one leg of the photoresistor to the A4 (or A0) analog pin on your Particle device.
   - Connect the other leg of the photoresistor to the ground (GND) on your Particle device.
   - Connect a 10k ohm resistor from the same leg of the photoresistor to the 3.3V pin on your Particle device.
   - Connect the onboard LED on your Particle device to the D7 digital pin.

2. Clone this repository to your local machine or download the code as a ZIP file and extract it.

3. Open the Arduino IDE or Particle Dev and create a new project.

4. Copy and paste the code from `light_exposure_detector.ino` into your project.

5. Compile and upload the code to your Particle device.

## Usage

Once the code is uploaded to your Particle device and the hardware is set up as described above, your Light Exposure Detector is ready to use.

1. Power on your Particle device.

2. The detector will continuously monitor the light exposure.

3. When the light exposure surpasses the predefined threshold, the onboard LED will turn on, and a message indicating "Sunlight" will be published to the Particle Cloud.

4. When the light exposure is below the threshold, the LED will turn off, and a message indicating "No Sunlight" will be published.

You can monitor the light exposure data on the Particle Cloud or customize the code to perform additional actions based on the light levels detected.

## License


