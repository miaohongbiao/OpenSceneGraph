// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ApplicationUsage>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgGA/GUIEventHandler>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgGA::GUIEventHandler)
	I_DeclaringFile("osgGA/GUIEventHandler");
	I_BaseType(osg::NodeCallback);
	I_BaseType(osg::Drawable::EventCallback);
	I_Constructor0(____GUIEventHandler,
	               "",
	               "");
	I_Constructor2(IN, const osgGA::GUIEventHandler &, x, IN, const osg::CopyOp &, x,
	               ____GUIEventHandler__C5_GUIEventHandler_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method2(void, event, IN, osg::NodeVisitor *, nv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__event__osg_NodeVisitor_P1__osg_Drawable_P1,
	          "Event traversal drawable callback method. ",
	          "");
	I_Method4(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, aa, IN, osg::Object *, x, IN, osg::NodeVisitor *, x,
	          Properties::VIRTUAL,
	          __bool__handle__C5_GUIEventAdapter_R1__GUIActionAdapter_R1__osg_Object_P1__osg_NodeVisitor_P1,
	          "Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __bool__handle__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "deprecated, Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, x,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgGA::GUIEventHandlerVisitor)
	I_DeclaringFile("osgGA/GUIEventHandler");
	I_Constructor0(____GUIEventHandlerVisitor,
	               "",
	               "");
	I_Method1(void, visit, IN, osgGA::GUIEventHandler &, x,
	          Properties::NON_VIRTUAL,
	          __void__visit__GUIEventHandler_R1,
	          "",
	          "");
END_REFLECTOR

