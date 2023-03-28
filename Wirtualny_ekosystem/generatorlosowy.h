#ifndef GENERATORLOSOWY_H
#define GENERATORLOSOWY_H
#include <random>

class GeneratorLosowy
{
private:
    static std::random_device device;
    GeneratorLosowy(){};

public:
    static unsigned short losujPomiedzy(unsigned short min, unsigned short max);
    static long losujPomiedzy(long min, long max);
    static int losujOdZeraDo(int max);
};

typedef GeneratorLosowy GEN;
std::random_device GeneratorLosowy::device;

unsigned short GeneratorLosowy::losujPomiedzy(unsigned short min, unsigned short max)
{
    if(min>max){
        unsigned short t = min;
        min = max;
        max = t;
    }

    std::uniform_int_distribution<unsigned short> dist(min,max);
    return  dist(GeneratorLosowy::device);
}

long GeneratorLosowy::losujPomiedzy(long min, long max){
    if(min>max){
        long t = min;
        min = max;
        max = t;
    }
    std::uniform_int_distribution<long> dist(min,max);
    return dist(GeneratorLosowy::device);
}

int GeneratorLosowy::losujOdZeraDo(int max){
    std::uniform_int_distribution<int> dist(0,max);
    return dist(GeneratorLosowy::device);
}

#endif // GENERATORLOSOWY_H
