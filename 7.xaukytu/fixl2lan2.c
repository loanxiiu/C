bool khoangtrang(char c){
    return c==' ' || c=='\t' || c=='\n';
}

void hienthitu(char *str, int pos, int length ){
    printf("tu dai nhat:");
    int i;
    for( i=pos; i<pos+length; i++){
        printf("%c",str[i]);
    }
    printf("\ndo dai:%d \nvi tri cua tu: %d",length, pos);
}

int timvitri(char *str, int *length){
    int len=0;
    int lenmax=0;
    int pos=0;
    int poscurrent=0;
    int size = strlen(str);
    int i;
    for(i=0; i<size; i++){
        if(!khoangtrang(str[i])){
            poscurrent=i-len;
            len++;
        }
        else{
            if(len>lenmax){
                lenmax=len;
                pos=poscurrent;
            }
            len=0;
        }
    }
    *length=lenmax;
    return pos;
}