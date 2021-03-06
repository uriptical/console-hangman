{$IFNDEF MSWINDOWS}
{$IFNDEF WIN32}
{$IFNDEF WIN64}
  // This unit is only supported by Win32 and Win64 platforms
  !! DOES NOT WORK WITH NON-WINDOWS PLATFORMS !!
{$ENDIF}
{$ENDIF}
{$ENDIF}

{$IFDEF CONDITIONALEXPRESSIONS}

  {$IF CompilerVersion >= 14}
    {$IFNDEF VER140}
      {$DEFINE VER140}
    {$ENDIF}  // IFNDEF VER140

    {$DEFINE VER130}
    {$DEFINE VER120}
    {$DEFINE VER110}
    {$DEFINE VER100}
    {$DEFINE VER90}
    {$DEFINE VER80}

  {$IFEND}  // IF CompilerVersion >= 14

  {$IF CompilerVersion >= 15}
    {$IFNDEF VER150}
      {$DEFINE VER150}
    {$ENDIF}  // IFNDEF VER150
  {$IFEND}  // IF CompilerVersion >= 15

{$ELSE}   // IFDEF CONDITIONALEXPRESSIONS

  {$IFDEF VER90}
    {$DEFINE VER80}
  {$ENDIF}  // IFDEF VER90

  {$IFDEF VER100}
    {$DEFINE VER90}
    {$DEFINE VER80}
  {$ENDIF}  // IFDEF VER100

  {$IFDEF VER110}
    {$DEFINE VER100}
    {$DEFINE VER90}
    {$DEFINE VER80}
  {$ENDIF}  // IFDEF VER110

  {$IFDEF VER120}
    {$DEFINE VER110}
    {$DEFINE VER100}
    {$DEFINE VER90}
    {$DEFINE VER80}
  {$ENDIF}  // IFDEF VER130

  {$IFDEF VER130}
    {$DEFINE VER120}
    {$DEFINE VER110}
    {$DEFINE VER100}
    {$DEFINE VER90}
    {$DEFINE VER80}
  {$ENDIF}  // IFDEF VER130

{$ENDIF}  // IFDEF CONDITIONALEXPRESSIONS

