////////////////////////////////////////////////////////
//Defines///////////////////////////////////////////////
////////////////////////////////////////////////////////

#define BUFF_SIZE_MAX   20

#define SYNC_START      0b10101010
#define SYNC_END        0b01010101

#define uint unsigned int
#define uchar unsigned char

#define F_CPU 16000000UL
////////////////////////////////////////////////////////

uint buffer[BUFF_SIZE_MAX];
uint i=0;

void FillBuffer(){
    
    uint data = Recieve();
    if(data==SYNC_START) 
        { i=0; return;}
    else {
        if(data!=SYNC_END)(
            //if no frame error or parity error
            if(/*no error*/ check){
            buffer[i] = data;
            i++;
            return;
            }else{
            i=0;
            return;
            }
        )else {
            i=0;
            return;
        }
    }
}