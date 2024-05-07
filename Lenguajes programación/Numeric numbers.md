# Binary Code
## What is binary code?
Binary code is a system of representing text, computer processor instructions, or any other data using a binary system, which relies on two symbols, typically represented as 0 and 1. Binary code is the language all computers in the world use.


In binary code, each digit is referred to as a bit and a sequence of eight bits is called a byte. Each bit in a binary number can have 2 posible values of information. 
- 1 bit = b
- 8 bits = 1 byte = B (2^8 posibles valores)


So:
- 1 bit = 2 valores posibles
- 2 bits = 4 valores posibles
- 3 bits = 8 valores posibles
- 4 bits = 16 valores
- 8 bits = 256 valores 


![download](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/97e6030a-e048-4209-b9cd-09c10c047c97)

## Multiples of binary code
- 1 **KByte** = 1 kB = 1024 bytes (2^10 Bytes)
- 1 **MByte** = 1 MB = 1024 kB = 2^10 kB = 2^20 B
- 1 **GByte** = 1024 MB = 2^10 MB = 2^30 bytes = 2^33bits
- 1 **TByte** = 1024 GB = 2^40B = 2^43 bits
## Adbantages and disadvantages
- It is really easy to do a binary circuit


![download](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/8abe60d4-33e7-43bd-b892-986a5d198545)
- Aritmetic operations are longer but easier.
- Binary numbers are really long compared to other languages becuase they are harder for humans but they are easy for cumputers.
    - Example:
      - 4 numbers in decimal are equal to 10 in binary 2^9 < 1000 (in decimal) < 2^10
## Nomenclature
To specify the type of number we have to put "HEX", "DEC" or "OCT" in the bottom of the number as a subindex.


![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/59c007f2-5ce4-4d57-9942-d539bb915e77)

# Hexadecimal
Hexadecimal goes from 0-9 and A-F. 
![1552a7a7b6a3bf5f1adb1dde5295b6e6](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/92dd8a73-975b-4ae2-ba6f-7cade85762e4)

# Transformations
## Binary to decmial
To pass a binary number to decimal what we have to do is this:


![Imagen de WhatsApp 2024-05-07 a las 19 05 51_cede1f55](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/34bb1b44-c383-4eff-9884-31e66aa93800)



So each time there is a 1 you have to put the number that it is times how many steps you took minus one. So the third 1 in the photo is 2^3 because it's the fourth step minus one. And repeat this each time you sea a 1. And then when you finish the number, you have to add all of this nummbers. So in this case 2^7 + 2^6 + 2^3 + 2^1 + 2^0 = 203

## Decimal to binary
It is very easy, you just start dividing by two and then the reminder is going to be the binary number:


![Imagen de WhatsApp 2024-05-07 a las 19 12 28_9aedbb07](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/6a62918d-bb6b-4d10-b290-071254d8ca79)


So when you have all of the reminders, you put them in order from the bottom to the top and that's it.
## Binary to hexadecimal
So there are two ways of doing it but I am going to explain the one I use. If you have a binary number and you want to pass it to hexadecimal I just pass the binary to decimal and then from decimal to hexadecimal by dividing by 16 all the time just like we do when passing from decimal to binary:


![Imagen de WhatsApp 2024-05-07 a las 19 12 28_6620da4a](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/d7fb9aa0-a1df-4d02-9f8e-3bac035ea6de)

## Hexadecimal to decimal
As we did when passing from binary to decmial, we do the same thing but instead of a base 2 we use a base 16:


![Imagen de WhatsApp 2024-05-07 a las 19 30 19_98f8ee56](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/bbdafa84-ba4b-41d8-9d8d-60b7f7a46c59)

## Decimal to hexadecimal
Same as in binary but dividing by 16:


![Imagen de WhatsApp 2024-05-07 a las 19 12 28_6620da4a](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/d7fb9aa0-a1df-4d02-9f8e-3bac035ea6de)
