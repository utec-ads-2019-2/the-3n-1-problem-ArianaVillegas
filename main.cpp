#include <iostream>

using namespace std;

int pasosAlgoritmo(unsigned int num){
    unsigned int pasos=1;
    while (num>1){
        if (num%2==0){
            num/=2;
        }else{
            num=num*3+1;
        }
        pasos++;
    }
    return pasos;
}

void inputCycle(unsigned int &start, unsigned int &end){
    if (start>end){
        unsigned int temp=start;
        start = end;
        end = temp;
    }
}

int maxCycleLenght(unsigned int start, unsigned int end){
    unsigned int max = pasosAlgoritmo(start);
    unsigned int next=0;
    for (int i = start+1; i <= end; ++i) {
        next = pasosAlgoritmo(i);
        if (max<next){
            max = next;
        }
    }
    return max;
}

int main(int argc, char *argv[]) {
    unsigned int start,end;
    while (scanf("%u %u",&start,&end)==2){
        cout << start << " " << end << " ";
        inputCycle(start,end);
        cout << maxCycleLenght(start, end) << '\n';
    }

    return 0;
}
