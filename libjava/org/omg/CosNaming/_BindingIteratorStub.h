
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming__BindingIteratorStub__
#define __org_omg_CosNaming__BindingIteratorStub__

#pragma interface

#include <org/omg/CORBA/portable/ObjectImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
        namespace portable
        {
            class Delegate;
        }
      }
      namespace CosNaming
      {
          class BindingHolder;
          class BindingListHolder;
          class _BindingIteratorStub;
      }
    }
  }
}

class org::omg::CosNaming::_BindingIteratorStub : public ::org::omg::CORBA::portable::ObjectImpl
{

public:
  _BindingIteratorStub();
public: // actually package-private
  _BindingIteratorStub(::org::omg::CORBA::portable::Delegate *);
public:
  virtual JArray< ::java::lang::String * > * _ids();
  virtual jboolean _non_existent();
  virtual void destroy();
  virtual jboolean next_n(jint, ::org::omg::CosNaming::BindingListHolder *);
  virtual jboolean next_one(::org::omg::CosNaming::BindingHolder *);
public: // actually protected
  virtual void finalize();
private:
  static const jlong serialVersionUID = 8969257760771186704LL;
  jboolean __attribute__((aligned(__alignof__( ::org::omg::CORBA::portable::ObjectImpl)))) destroyed;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming__BindingIteratorStub__