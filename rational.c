struct RationalNum {
    int num;
    int dom;
    double value;
};
struct RationalNum add(struct RationalNum a, struct RationalNum b){   
    int num = a.num*b.dom+b.num*a.dom;
    int dom = a.dom*b.dom;
    int value = num/dom;
    struct RationalNum c={num,dom,value};
return c;
};
struct RationalNum subtract(struct RationalNum a, struct RationalNum b){
     int num = a.num*b.dom-b.num*a.dom;
    int dom = a.dom*b.dom;
    int value = num/dom;
    struct RationalNum c={num,dom,value};
return c;
};
struct RationalNum multiply(struct RationalNum a, struct RationalNum b ){
    int num = a.num*b.num;
    int dom = a.dom*b.dom;
    int value = num/dom;
    struct RationalNum c={num,dom,value};
return c;
};
struct RationalNum divide(struct RationalNum a, struct RationalNum b ){
    int num = a.num*b.dom;
    int dom = a.dom*b.num;
    int value = num/dom;
    struct RationalNum c={num,dom,value};
return c;
};
struct RationalNum reduce(struct RationalNum a){
    int num = a.num;
    int dom = a.dom;
    for(int b=2;b<num;b++){
        if (num%b == 0 && dom%b == 0){
            num = num/b;
            dom =dom/b; 
        b--;
        }
    }
     struct RationalNum c={num,dom,0};
return c;    
};
int main(){
    struct RationalNum a={1,2,0.50};
    struct RationalNum b={1,3,0.3333333333333333333};
    printf("%i/%i\n",add(a,b).num, add(a,b).dom);
    printf("%i/%i\n",subtract(a,b).num, subtract(a,b).dom);
    printf("%i/%i\n", multiply(a,b).num, multiply(a,b).dom);
    printf("%i/%i\n", divide(a,b).num, divide(a,b).dom);
};