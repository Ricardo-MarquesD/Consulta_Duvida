package app;

import poo.*; // Usando import + nome da passa, conseguimos chamar as classes de outras pastar para esse arquivo
import java.util.Scanner;
import java.util.ArrayList;

// Aqui a gente inicializa nosso código com uma Classe, que é o bloco de código principal do arquivo. Formato: tipo_da_classe class nome_do_arquivo
public class App { // public define que nossa classe pode ser acessada por qualquer outro arquivo java no programa, class define que isto é uma classe, e o nome do arquivo.java

    // Declaramos um método main, que é onde o arquivo será executado primariamente, o static diz que é um método único e travado a classe de origem.
    public static void main(String[] args) { // o void diz que não retorna nada, e o String[] args, é um parâmetro que pode receber uma lista de argumentos.
        Scanner input = new Scanner(System.in);
        int choose = input.nextInt(); // Dessa forma declaramos uma variável e damos a ele o valor de input do prompt

        switch(choose){ // Switch em Java
            case 1:
                Poo();
                break;
            default:
                System.out.println("Escolha errada!!");
                break;
        }
    }

    public static void Poo(){
        // Criação comum de entidades
        SubClass sub1 = new SubClass(3, null, "Hi guys", "Hola amigo"); // Dessa forma a gente cria um objeto chamando sua respectiva classe/classe construtora
        //sub1.menssage(); // Chamando os métodos do objetos, que criamos anteriormente
        //sub1.AbsMetod();

        // ArrayList
        ArrayList<String> lista = new ArrayList<>(); // Criando uma arraylist do tipo string
        lista.add("Hi bro"); // Adicionando elementos a essa ArrayList
        lista.add("your is incorrect, I am the true");
        System.out.println(lista); // Printando toda a arraylist
        System.out.println(lista.get(0)); // Pritando uma parte especifica
    
        // Hashmap

    }
}
