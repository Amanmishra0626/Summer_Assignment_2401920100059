package live;
import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
public class Test {
    public static void main(String[] ar) {
        Veena veena = new Veena();
        veena.play();
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        Playable Instrument;
        Instrument = veena;
        Instrument.play();
        Instrument = saxophone;
        Instrument.play();
    }
}
