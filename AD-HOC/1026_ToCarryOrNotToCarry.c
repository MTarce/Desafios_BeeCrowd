
#include <stdio.h>
#include <stdint.h>


int main() {
    unsigned int a, b;
    
    while (scanf("%u %u", &a, &b) != EOF) {
        unsigned int result = 0;

        for (int i = 0; i < 32; i++) {
            // Pega o i-ésimo bit de 'a' e 'b'
            unsigned int bitA = (a >> i) & 1;
            unsigned int bitB = (b >> i) & 1;

            // XOR manual entre os bits
            unsigned int xorBit = bitA ^ bitB;

            // Posiciona o bit XOR na posição correta do resultado
            result |= (xorBit << i);
        }

        printf("%u\n", result);
    }

    return 0;
}