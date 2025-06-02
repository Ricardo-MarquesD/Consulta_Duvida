package poo;

public class SubClass extends Super{
    private int valor;

    public SubClass(int valor, String word1, String word2, String word3){ // Construtor da SubClass
        super(word2); // Chamando o construtor da Super na subclasse
        try{ // Iniciamos um try/catch, um tipo de tratamento de erro para grandes blocos de processamento
            this.valor = valor;
            this.word1 = word1; // Conseguimos acessar pelo fator public
            this.word3 = word3; // Conseguimos acessar pelo fato de SubClass estar no escopo de Super
        }catch(Exception e){ // Aqui declaramos o tipo de erro e um nome para ele
            System.out.println("Ocorreu um erro no construtor da SubClass, erro: " + e.getMessage()); // Aplicação da mensagem de erro caso exista um erro
        }
    }
    
    @Override // Chamamento do método abstrato da super Absmetod(), usando um @override, que permite a modificação do método de acodo com a necessidade da classe filho
    public void AbsMetod() {
        System.out.println("Essa mensagem foi puxada da classe SubClass de valor "+ this.valor +" usando um método abstrato de Super.");
    }

    @Override
    public void menssage(){ // Usando o @override, podemos também modificar funções pré-definidas na classe pai
        super.menssage(); // super permite chamar funções da classe pai na classe filho
        System.out.println("Ola vindo da Classe filho da Super, SubClass de valor n° " + this.valor);
    }
}
