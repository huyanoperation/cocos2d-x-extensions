/*
** Lua binding: cocos2dx_extension_native_mac
** Generated automatically by tolua++-1.0.92 on Wed Oct 31 14:59:42 2012.
*/

#include "cocos2dx_extension_native_mac.h"



#include "native/CCNative.h"
using namespace cocos2d::extension;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCNative");
 
}

/* method: createAlert of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_createAlert00
static int tolua_cocos2dx_extension_native_mac_CCNative_createAlert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* message = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* cancelButtonTitle = ((const char*)  tolua_tostring(tolua_S,4,0));
  {
   CCNative::createAlert(title,message,cancelButtonTitle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createAlert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAlertButton of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_addAlertButton00
static int tolua_cocos2dx_extension_native_mac_CCNative_addAlertButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* buttonTitle = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   int tolua_ret = (int)  CCNative::addAlertButton(buttonTitle);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAlertButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: showAlertLua of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_showAlertLua00
static int tolua_cocos2dx_extension_native_mac_CCNative_showAlertLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LUA_FUNCTION listener = (  toluafix_ref_function(tolua_S,2,0));
  {
   CCNative::showAlertLua(listener);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showAlertLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cancelAlert of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_cancelAlert00
static int tolua_cocos2dx_extension_native_mac_CCNative_cancelAlert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCNative::cancelAlert();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cancelAlert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: openURL of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_openURL00
static int tolua_cocos2dx_extension_native_mac_CCNative_openURL00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* url = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCNative::openURL(url);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'openURL'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpenUDID of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_getOpenUDID00
static int tolua_cocos2dx_extension_native_mac_CCNative_getOpenUDID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const std::string tolua_ret = (const std::string)  CCNative::getOpenUDID();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpenUDID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInputText of class  CCNative */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_native_mac_CCNative_getInputText00
static int tolua_cocos2dx_extension_native_mac_CCNative_getInputText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNative",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* message = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* defaultValue = ((const char*)  tolua_tostring(tolua_S,4,0));
  {
   const std::string tolua_ret = (const std::string)  CCNative::getInputText(title,message,defaultValue);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInputText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_cocos2dx_extension_native_mac_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"CCActivityIndicatorViewStyleWhiteLarge",CCActivityIndicatorViewStyleWhiteLarge);
  tolua_constant(tolua_S,"CCActivityIndicatorViewStyleWhite",CCActivityIndicatorViewStyleWhite);
  tolua_constant(tolua_S,"CCActivityIndicatorViewStyleGray",CCActivityIndicatorViewStyleGray);
  tolua_cclass(tolua_S,"CCNative","CCNative","",NULL);
  tolua_beginmodule(tolua_S,"CCNative");
   tolua_function(tolua_S,"createAlert",tolua_cocos2dx_extension_native_mac_CCNative_createAlert00);
   tolua_function(tolua_S,"addAlertButton",tolua_cocos2dx_extension_native_mac_CCNative_addAlertButton00);
   tolua_function(tolua_S,"showAlertLua",tolua_cocos2dx_extension_native_mac_CCNative_showAlertLua00);
   tolua_function(tolua_S,"cancelAlert",tolua_cocos2dx_extension_native_mac_CCNative_cancelAlert00);
   tolua_function(tolua_S,"openURL",tolua_cocos2dx_extension_native_mac_CCNative_openURL00);
   tolua_function(tolua_S,"getOpenUDID",tolua_cocos2dx_extension_native_mac_CCNative_getOpenUDID00);
   tolua_function(tolua_S,"getInputText",tolua_cocos2dx_extension_native_mac_CCNative_getInputText00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cocos2dx_extension_native_mac (lua_State* tolua_S) {
 return tolua_cocos2dx_extension_native_mac_open(tolua_S);
};
#endif

