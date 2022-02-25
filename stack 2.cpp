# include <iostream>
# include <cstring>

 using namespace std;

 struct node {
    char data;
    node *next;
 };

 node *top=NULL;
 node *bottom=NULL;
 node *entry;
 node *last_entry;
 node *second_last_entry;

 void push(const char Symbol) {
    entry=new node;
    if(bottom==NULL) {
         entry->data=Symbol;
         entry->next=NULL;
         bottom=entry;
         top=entry;
    }
    else {
         entry->data=Symbol;
         entry->next=NULL;
         top->next=entry;
         top=entry;
    }
}

const char pop( ) {
    char Symbol=NULL;

    if(bottom==NULL)
        cout<<"\n\n\n\t ***  Error : Stack is empty. \n"<<endl;

    else {
        for (last_entry=bottom; last_entry->next!=NULL; last_entry=last_entry->next)
            second_last_entry=last_entry;

        if(top==bottom)
        bottom=NULL;

        Symbol=top->data;

        delete top;

        top=second_last_entry;
        top->next=NULL;
    }

    return Symbol;
}

void infix_to_postfix(const char *Infix) {
    char Infix_expression[100]={NULL};
    char Postfix_expression[100]={NULL};

    strcpy(Infix_expression,"(");
    strcat(Infix_expression,Infix);
    strcat(Infix_expression,")");

    char Symbol[5]={NULL};
    char Temp[5]={NULL};

    for(int count=0;count<strlen(Infix_expression);count++) {
        Symbol[0]=Infix_expression[count];

        if(Symbol[0]=='(')
            push(Symbol[0]);

        else if(Symbol[0]==')') {
           Symbol[0]=pop( );

           while(Symbol[0]!='(')
              {
             strcat(Postfix_expression,Symbol);

             Symbol[0]=pop( );
              }
        }

         else if(Symbol[0]=='^' || Symbol[0]=='*' || Symbol[0]=='/'
                    || Symbol[0]=='+' || Symbol[0]=='-')
        {
           if(Symbol[0]=='*' || Symbol[0]=='/')
              {
             Temp[0]=pop( );

             while(Temp[0]=='^' || Temp[0]=='*' || Temp[0]=='/')
                {
                   strcat(Postfix_expression,Temp);

                   Temp[0]=pop( );
                }

             push(Temp[0]);
              }

           else if(Symbol[0]=='+' || Symbol[0]=='-')
              {
             Temp[0]=pop( );

             while(Temp[0]!='(')
                {
                   strcat(Postfix_expression,Temp);

                   Temp[0]=pop( );
                }

             push(Temp[0]);
              }

           push(Symbol[0]);
        }

         else
        strcat(Postfix_expression,Symbol);
      }

       cout<<"\n\n Postfix Expression : "<<Postfix_expression;
}

 int main( ) {
    char Infix_expression[100]={NULL};
    cout<<"\n\n Enter the Infix Expression : ";
    cin>>Infix_expression;
    infix_to_postfix(Infix_expression);
    return 0;
}
