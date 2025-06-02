package poo;

abstract class Super{ // Criando uma classe abstrata, onde será declarado dados abstratos e simples
    public String word1; // Pode ser acessada de qualquer lugar, quando instânciada
    private String word2; // Somente pode ser acessada via um intermediario
    protected String word3; // Pode ser acessado de qualquer parte de seu escopo(Super e suas dependentes)
    
    public Super(String word2){ // Método Construtor da Classe Abstrata
        this.word2 = word2;
        if(word2 != (String)word2){ // If para dar inicio a um tratamento de throw
            throw new IllegalArgumentException("Houve um erro na word2!"); // Declarando nosso tipo de erro no tratamento
        }
    }

    public abstract void AbsMetod(); // Método abstrato, pode ser modificado nas sub-classes
    public void menssage(){ // Uma função para demonstrar menssagens
        System.out.println("Ola vindo da Classe Super");
    }
}