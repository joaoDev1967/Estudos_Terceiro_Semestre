import java.util.LinkedList;
import java.util.Scanner;

class OperacoesNum{
    public void BuscaDeNum(LinkedList<Integer> numList, int numBuscado){
        boolean numContido=false;
        for(int num:numList){
            if(num==numBuscado){
                System.out.println("O numero esta aqui: "+num);
                numContido=true;
            }
        }
        if(numContido==false){
            System.out.println("O numero nao esta aqui");
        }
    }
}



public class TreinoListas{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.print("Escreva o número que você deseja buscar: ");
        int numBuscado=scan.nextInt();
        OperacoesNum operacoesNum= new OperacoesNum();
        LinkedList<Integer> numeros = new LinkedList<>();
        
        numeros.push(1963);
        numeros.push(1965);
        numeros.push(1967);
        operacoesNum.BuscaDeNum(numeros, numBuscado);
    }
}