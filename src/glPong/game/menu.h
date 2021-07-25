#ifndef glPong_GAME_MENU_H
#define glPong_GAME_MENU_H

#include <glPong/game/state.h>

typedef struct GLFWwindow GLFWwindow;
typedef struct GameMenu GameMenu;

struct GameMenu
{
    struct nk_glfw *glfw;
    struct nk_context *ctx;
    struct nk_colorf *bg;
    int initialized;
};

void GameMenuInit(GameMenu *menu);
void GameMenuLoad(GameMenu *menu, GLFWwindow *win);
void GameMenuSetup(GameMenu *menu, GameState *state, unsigned int w, unsigned int h);
void GameMenuRender(GameMenu *menu);
void GameMenuDelete(GameMenu *menu);

#endif // glPong_GAME_MENU_H