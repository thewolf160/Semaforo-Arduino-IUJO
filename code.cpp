
// --- PINES SEMÁFOROS VEHICULARES ---
const int LED_V_NS = 13; // Verde Vehicular Norte-Sur
const int LED_A_NS = 12; // Amarillo Vehicular Norte-Sur
const int LED_R_NS = 11; // Rojo Vehicular Norte-Sur

const int LED_V_EO = 8;  // Verde Vehicular Este-Oeste
const int LED_A_EO = 7;  // Amarillo Vehicular Este-Oeste
const int LED_R_EO = 6;  // Rojo Vehicular Este-Oeste

// --- PINES SEMÁFOROS PEATONALES ---
const int PEAT_V_NS = 10; // Verde Peatonal Norte-Sur
const int PEAT_R_NS = 9;  // Rojo Peatonal Norte-Sur

const int PEAT_V_EO = 5;  // Verde Peatonal Este-Oeste
const int PEAT_R_EO = 4;  // Rojo Peatonal Este-Oeste

// --- TIEMPOS (en milisegundos) ---
const unsigned long TIEMPO_VERDE = 5000;       // 5 segundos
const unsigned long TIEMPO_AMARILLO = 2000;    // 2 segundos
const unsigned long TIEMPO_ROJO_TOTAL = 1500;  // 1.5 segundos de seguridad

void setup() {
  pinMode(LED_V_NS, OUTPUT);
  pinMode(LED_A_NS, OUTPUT);
  pinMode(LED_R_NS, OUTPUT);
  
  pinMode(LED_V_EO, OUTPUT);
  pinMode(LED_A_EO, OUTPUT);
  pinMode(LED_R_EO, OUTPUT);
  
  pinMode(PEAT_V_NS, OUTPUT);
  pinMode(PEAT_R_NS, OUTPUT);
  pinMode(PEAT_V_EO, OUTPUT);
  pinMode(PEAT_R_EO, OUTPUT);
}
