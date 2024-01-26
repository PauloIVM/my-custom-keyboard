#ifndef KEY_EVENT_TYPE_H
#define KEY_EVENT_TYPE_H
enum KeyEventType {
    pressed,
    released
};
#endif

class KeyboardMatrix {
    public:
        KeyboardMatrix(int* rowPins, int rowPinsLength, int* colPins, int colPinsLength);
        void printCellsPressed();
    private:
        void fillCols(int value);
        int* rowPins;
        int rowPinsLength;
        int* colPins;
        int colPinsLength;
        // TODO: Refatorar para q essa config de max 100 keys não fique hard-coded
        int keysStateMatrix[10][10];
};
