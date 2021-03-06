//from sdl_hints.h

type
TSDL_Char = PChar;

const
  SDL_HINT_FRAMEBUFFER_ACCELERATION = 'SDL_FRAMEBUFFER_ACCELERATION';
  SDL_HINT_RENDER_DRIVER = 'SDL_RENDER_DRIVER';
  SDL_HINT_RENDER_OPENGL_SHADERS = 'SDL_RENDER_OPENGL_SHADERS';
  SDL_HINT_RENDER_SCALE_QUALITY = 'SDL_RENDER_SCALE_QUALITY';
  SDL_HINT_RENDER_VSYNC = 'SDL_RENDER_VSYNC';
  SDL_HINT_VIDEO_X11_XVIDMODE = 'SDL_VIDEO_X11_XVIDMODE';
  SDL_HINT_VIDEO_X11_XINERAMA = 'SDL_VIDEO_X11_XINERAMA';
  SDL_HINT_VIDEO_X11_XRANDR = 'SDL_VIDEO_X11_XRANDR';
  SDL_HINT_GRAB_KEYBOARD = 'SDL_GRAB_KEYBOARD';
  SDL_HINT_VIDEO_MINIMIZE_ON_FOCUS_LOSS = 'SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS';
  SDL_HINT_IDLE_TIMER_DISABLED = 'SDL_IOS_IDLE_TIMER_DISABLED';
  SDL_HINT_ORIENTATIONS = 'SDL_IOS_ORIENTATIONS';
  SDL_HINT_XINPUT_ENABLED = 'SDL_XINPUT_ENABLED';
  SDL_HINT_GAMECONTROLLERCONFIG = 'SDL_GAMECONTROLLERCONFIG';
  SDL_HINT_ALLOW_TOPMOST = 'SDL_ALLOW_TOPMOST';


  SDL_HINT_DEFAULT = 0;
  SDL_HINT_NORMAL = SDL_HINT_DEFAULT + 1;
  SDL_HINT_OVERRIDE = SDL_HINT_NORMAL + 1;

function SDL_SetHintWithPriority(name, value: TSDL_Char; priority: Uint32): TSDL_Bool; cdecl; external SDL_LibName {$IFDEF DELPHI} {$IFDEF MACOS} name '_SDL_SetHintWithPriority' {$ENDIF} {$ENDIF};
function SDL_SetHint(name, value: TSDL_Char): TSDL_Bool; cdecl; external SDL_LibName {$IFDEF DELPHI} {$IFDEF MACOS} name '_SDL_SetHint' {$ENDIF} {$ENDIF};
function SDL_GetHint(name: TSDL_Char): TSDL_Char; cdecl; external SDL_LibName {$IFDEF DELPHI} {$IFDEF MACOS} name '_SDL_GetHint' {$ENDIF} {$ENDIF};
procedure SDL_ClearHints; cdecl; external SDL_LibName {$IFDEF DELPHI} {$IFDEF MACOS} name '_SDL_ClearHints' {$ENDIF} {$ENDIF};