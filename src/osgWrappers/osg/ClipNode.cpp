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

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/ClipNode>
#include <osg/ClipPlane>
#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/StateAttribute>
#include <osg/StateSet>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osg::ClipPlane > >, osg::ClipNode::ClipPlaneList)

BEGIN_OBJECT_REFLECTOR(osg::ClipNode)
	I_DeclaringFile("osg/ClipNode");
	I_BaseType(osg::Group);
	I_Constructor0(____ClipNode,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ClipNode &, es, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ClipNode__C5_ClipNode_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_MethodWithDefaults2(void, createClipBox, IN, const osg::BoundingBox &, bb, , IN, unsigned int, clipPlaneNumberBase, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__createClipBox__C5_BoundingBox_R1__unsigned_int,
	                      "Creates six clip planes corresponding to the given BoundingBox. ",
	                      "");
	I_Method1(bool, addClipPlane, IN, osg::ClipPlane *, clipplane,
	          Properties::NON_VIRTUAL,
	          __bool__addClipPlane__ClipPlane_P1,
	          "Adds the clipplane. ",
	          "Returns true on success, and false if the plane has already been added, or if clipplane is NULL. ");
	I_Method1(bool, removeClipPlane, IN, osg::ClipPlane *, clipplane,
	          Properties::NON_VIRTUAL,
	          __bool__removeClipPlane__ClipPlane_P1,
	          "Removes the clipplane. ",
	          "Returns true on success, false if clipplane isn't in this ClipNode. ");
	I_Method1(bool, removeClipPlane, IN, unsigned int, pos,
	          Properties::NON_VIRTUAL,
	          __bool__removeClipPlane__unsigned_int,
	          "Remove the ClipPlane with the given index. ",
	          "Returns true on success, false if pos is not a valid plane index. ");
	I_Method0(unsigned int, getNumClipPlanes,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumClipPlanes,
	          "Returns the number of ClipPlanes. ",
	          "");
	I_Method1(osg::ClipPlane *, getClipPlane, IN, unsigned int, pos,
	          Properties::NON_VIRTUAL,
	          __ClipPlane_P1__getClipPlane__unsigned_int,
	          "Get ClipPlane at the given index position. ",
	          "");
	I_Method1(const osg::ClipPlane *, getClipPlane, IN, unsigned int, pos,
	          Properties::NON_VIRTUAL,
	          __C5_ClipPlane_P1__getClipPlane__unsigned_int,
	          "Get const ClipPlane at the given index position. ",
	          "");
	I_Method1(void, setClipPlaneList, IN, const osg::ClipNode::ClipPlaneList &, cpl,
	          Properties::NON_VIRTUAL,
	          __void__setClipPlaneList__C5_ClipPlaneList_R1,
	          "Set the ClipPlaneList. ",
	          "");
	I_Method0(osg::ClipNode::ClipPlaneList &, getClipPlaneList,
	          Properties::NON_VIRTUAL,
	          __ClipPlaneList_R1__getClipPlaneList,
	          "Get the ClipPlaneList. ",
	          "");
	I_Method0(const osg::ClipNode::ClipPlaneList &, getClipPlaneList,
	          Properties::NON_VIRTUAL,
	          __C5_ClipPlaneList_R1__getClipPlaneList,
	          "Get the const ClipPlaneList. ",
	          "");
	I_Method2(void, setStateSetModes, IN, osg::StateSet &, x, IN, osg::StateAttribute::GLModeValue, x,
	          Properties::NON_VIRTUAL,
	          __void__setStateSetModes__StateSet_R1__StateAttribute_GLModeValue,
	          "Set the GLModes for all ClipPlanes, on the StateSet. ",
	          "");
	I_MethodWithDefaults1(void, setLocalStateSetModes, IN, osg::StateAttribute::GLModeValue, x, osg::StateAttribute::ON,
	                      Properties::NON_VIRTUAL,
	                      __void__setLocalStateSetModes__StateAttribute_GLModeValue,
	                      "Set up the local StateSet. ",
	                      "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __BoundingSphere__computeBound,
	          "Compute the bounding sphere around Node's geometry or children. ",
	          "This method is automatically called by getBound() when the bounding sphere has been marked dirty via dirtyBound(). ");
	I_ArrayProperty(osg::ClipPlane *, ClipPlane, 
	                __ClipPlane_P1__getClipPlane__unsigned_int, 
	                0, 
	                __unsigned_int__getNumClipPlanes, 
	                __bool__addClipPlane__ClipPlane_P1, 
	                0, 
	                __bool__removeClipPlane__unsigned_int);
	I_SimpleProperty(const osg::ClipNode::ClipPlaneList &, ClipPlaneList, 
	                 __C5_ClipPlaneList_R1__getClipPlaneList, 
	                 __void__setClipPlaneList__C5_ClipPlaneList_R1);
	I_SimpleProperty(osg::StateAttribute::GLModeValue, LocalStateSetModes, 
	                 0, 
	                 __void__setLocalStateSetModes__StateAttribute_GLModeValue);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::ClipPlane >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::ClipPlane *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::ClipPlane > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::ClipPlane *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::ClipPlane *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::ClipPlane > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::ClipPlane *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osg::ClipPlane > >)

