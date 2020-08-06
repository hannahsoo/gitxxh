static unsigned long int next;
int rand(void){
    next = next * 1103515245+12345;
    return (unsigned int)(next/65535)%32768;
}
void randSet(unsigned int seed){
    next = seed;
}