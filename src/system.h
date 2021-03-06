// SYSTEM SPECIFICATIONS
#define MEMORY_SIZE 4096
#define MEMORY_START 512
#define MAXSIZE 0X10000 - 0x200
#define WIDTH 640
#define HEIGHT 320
#define SQW 10  // square width
#define SQH 10  // square height
#define FRAMES_PER_SECOND 60

void clearScreen(SDL_Renderer * renderer, unsigned char screen[32][64]);
void point(SDL_Renderer * renderer, int x, int y);
void erase(SDL_Renderer * renderer, int x, int y);
void renderAll(SDL_Renderer *renderer, unsigned char screen[32][64]);
void disp(SDL_Renderer * renderer, unsigned char table[16][5], int c, int x, int y);
void dispAllChar(SDL_Renderer * renderer, unsigned char table[16][5]);
void updateTimers(unsigned short * delayTimer, unsigned short * soundTimer);
void setKeyBoardState(const Uint8 * state, int keyBoardState[16]);
int sprite(unsigned char screen[32][64],
  unsigned char buff[], int size, int x, int y);