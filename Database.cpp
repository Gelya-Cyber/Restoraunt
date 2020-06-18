/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Database
//!	Generated Date	: Thu, 18, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Database.cpp
*********************************************************************/

//## auto_generated
#include "Database.h"
//## link itsCancelReservation_Form
#include "CancelReservation_Form.h"
//## link itsMenuAdd_Form
#include "MenuAdd_Form.h"
//## link itsMenuDelete_Form
#include "MenuDelete_Form.h"
//## link itsOrderAdd_Form
#include "OrderAdd_Form.h"
//## link itsOrderDelete_Form
#include "OrderDelete_Form.h"
//## link itsOrderEdit_Form
#include "OrderEdit_Form.h"
//## link itsReservation_Form
#include "Reservation_Form.h"
//## link itsWaiterAdd_Form
#include "WaiterAdd_Form.h"
//## link itsWaiterDelete_Form
#include "WaiterDelete_Form.h"
//## link itsWaiterEdit_Form
#include "WaiterEdit_Form.h"
//## package Default

//## class Database
Database::Database() {
    itsCancelReservation_Form = NULL;
    itsMenuAdd_Form = NULL;
    itsMenuDelete_Form = NULL;
    itsOrderAdd_Form = NULL;
    itsOrderDelete_Form = NULL;
    itsOrderEdit_Form = NULL;
    itsReservation_Form = NULL;
    itsWaiterAdd_Form = NULL;
    itsWaiterDelete_Form = NULL;
    itsWaiterEdit_Form = NULL;
}

Database::~Database() {
    cleanUpRelations();
}

void Database::Show() {
    //#[ operation Show()
    //#]
}

int Database::getDBGrid() const {
    return DBGrid;
}

void Database::setDBGrid(int p_DBGrid) {
    DBGrid = p_DBGrid;
}

CancelReservation_Form* Database::getItsCancelReservation_Form() const {
    return itsCancelReservation_Form;
}

void Database::setItsCancelReservation_Form(CancelReservation_Form* p_CancelReservation_Form) {
    if(p_CancelReservation_Form != NULL)
        {
            p_CancelReservation_Form->_setItsDatabase(this);
        }
    _setItsCancelReservation_Form(p_CancelReservation_Form);
}

MenuAdd_Form* Database::getItsMenuAdd_Form() const {
    return itsMenuAdd_Form;
}

void Database::setItsMenuAdd_Form(MenuAdd_Form* p_MenuAdd_Form) {
    if(p_MenuAdd_Form != NULL)
        {
            p_MenuAdd_Form->_setItsDatabase(this);
        }
    _setItsMenuAdd_Form(p_MenuAdd_Form);
}

MenuDelete_Form* Database::getItsMenuDelete_Form() const {
    return itsMenuDelete_Form;
}

void Database::setItsMenuDelete_Form(MenuDelete_Form* p_MenuDelete_Form) {
    if(p_MenuDelete_Form != NULL)
        {
            p_MenuDelete_Form->_setItsDatabase(this);
        }
    _setItsMenuDelete_Form(p_MenuDelete_Form);
}

OrderAdd_Form* Database::getItsOrderAdd_Form() const {
    return itsOrderAdd_Form;
}

void Database::setItsOrderAdd_Form(OrderAdd_Form* p_OrderAdd_Form) {
    if(p_OrderAdd_Form != NULL)
        {
            p_OrderAdd_Form->_setItsDatabase(this);
        }
    _setItsOrderAdd_Form(p_OrderAdd_Form);
}

OrderDelete_Form* Database::getItsOrderDelete_Form() const {
    return itsOrderDelete_Form;
}

void Database::setItsOrderDelete_Form(OrderDelete_Form* p_OrderDelete_Form) {
    if(p_OrderDelete_Form != NULL)
        {
            p_OrderDelete_Form->_setItsDatabase(this);
        }
    _setItsOrderDelete_Form(p_OrderDelete_Form);
}

OrderEdit_Form* Database::getItsOrderEdit_Form() const {
    return itsOrderEdit_Form;
}

void Database::setItsOrderEdit_Form(OrderEdit_Form* p_OrderEdit_Form) {
    if(p_OrderEdit_Form != NULL)
        {
            p_OrderEdit_Form->_setItsDatabase(this);
        }
    _setItsOrderEdit_Form(p_OrderEdit_Form);
}

Reservation_Form* Database::getItsReservation_Form() const {
    return itsReservation_Form;
}

void Database::setItsReservation_Form(Reservation_Form* p_Reservation_Form) {
    if(p_Reservation_Form != NULL)
        {
            p_Reservation_Form->_setItsDatabase(this);
        }
    _setItsReservation_Form(p_Reservation_Form);
}

WaiterAdd_Form* Database::getItsWaiterAdd_Form() const {
    return itsWaiterAdd_Form;
}

void Database::setItsWaiterAdd_Form(WaiterAdd_Form* p_WaiterAdd_Form) {
    if(p_WaiterAdd_Form != NULL)
        {
            p_WaiterAdd_Form->_setItsDatabase(this);
        }
    _setItsWaiterAdd_Form(p_WaiterAdd_Form);
}

WaiterDelete_Form* Database::getItsWaiterDelete_Form() const {
    return itsWaiterDelete_Form;
}

void Database::setItsWaiterDelete_Form(WaiterDelete_Form* p_WaiterDelete_Form) {
    if(p_WaiterDelete_Form != NULL)
        {
            p_WaiterDelete_Form->_setItsDatabase(this);
        }
    _setItsWaiterDelete_Form(p_WaiterDelete_Form);
}

WaiterEdit_Form* Database::getItsWaiterEdit_Form() const {
    return itsWaiterEdit_Form;
}

void Database::setItsWaiterEdit_Form(WaiterEdit_Form* p_WaiterEdit_Form) {
    if(p_WaiterEdit_Form != NULL)
        {
            p_WaiterEdit_Form->_setItsDatabase(this);
        }
    _setItsWaiterEdit_Form(p_WaiterEdit_Form);
}

void Database::cleanUpRelations() {
    if(itsCancelReservation_Form != NULL)
        {
            Database* p_Database = itsCancelReservation_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsCancelReservation_Form->__setItsDatabase(NULL);
                }
            itsCancelReservation_Form = NULL;
        }
    if(itsMenuAdd_Form != NULL)
        {
            Database* p_Database = itsMenuAdd_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsMenuAdd_Form->__setItsDatabase(NULL);
                }
            itsMenuAdd_Form = NULL;
        }
    if(itsMenuDelete_Form != NULL)
        {
            Database* p_Database = itsMenuDelete_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsMenuDelete_Form->__setItsDatabase(NULL);
                }
            itsMenuDelete_Form = NULL;
        }
    if(itsOrderAdd_Form != NULL)
        {
            Database* p_Database = itsOrderAdd_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsOrderAdd_Form->__setItsDatabase(NULL);
                }
            itsOrderAdd_Form = NULL;
        }
    if(itsOrderDelete_Form != NULL)
        {
            Database* p_Database = itsOrderDelete_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsOrderDelete_Form->__setItsDatabase(NULL);
                }
            itsOrderDelete_Form = NULL;
        }
    if(itsOrderEdit_Form != NULL)
        {
            Database* p_Database = itsOrderEdit_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsOrderEdit_Form->__setItsDatabase(NULL);
                }
            itsOrderEdit_Form = NULL;
        }
    if(itsReservation_Form != NULL)
        {
            Database* p_Database = itsReservation_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsReservation_Form->__setItsDatabase(NULL);
                }
            itsReservation_Form = NULL;
        }
    if(itsWaiterAdd_Form != NULL)
        {
            Database* p_Database = itsWaiterAdd_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsWaiterAdd_Form->__setItsDatabase(NULL);
                }
            itsWaiterAdd_Form = NULL;
        }
    if(itsWaiterDelete_Form != NULL)
        {
            Database* p_Database = itsWaiterDelete_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsWaiterDelete_Form->__setItsDatabase(NULL);
                }
            itsWaiterDelete_Form = NULL;
        }
    if(itsWaiterEdit_Form != NULL)
        {
            Database* p_Database = itsWaiterEdit_Form->getItsDatabase();
            if(p_Database != NULL)
                {
                    itsWaiterEdit_Form->__setItsDatabase(NULL);
                }
            itsWaiterEdit_Form = NULL;
        }
}

void Database::__setItsCancelReservation_Form(CancelReservation_Form* p_CancelReservation_Form) {
    itsCancelReservation_Form = p_CancelReservation_Form;
}

void Database::_setItsCancelReservation_Form(CancelReservation_Form* p_CancelReservation_Form) {
    if(itsCancelReservation_Form != NULL)
        {
            itsCancelReservation_Form->__setItsDatabase(NULL);
        }
    __setItsCancelReservation_Form(p_CancelReservation_Form);
}

void Database::_clearItsCancelReservation_Form() {
    itsCancelReservation_Form = NULL;
}

void Database::__setItsMenuAdd_Form(MenuAdd_Form* p_MenuAdd_Form) {
    itsMenuAdd_Form = p_MenuAdd_Form;
}

void Database::_setItsMenuAdd_Form(MenuAdd_Form* p_MenuAdd_Form) {
    if(itsMenuAdd_Form != NULL)
        {
            itsMenuAdd_Form->__setItsDatabase(NULL);
        }
    __setItsMenuAdd_Form(p_MenuAdd_Form);
}

void Database::_clearItsMenuAdd_Form() {
    itsMenuAdd_Form = NULL;
}

void Database::__setItsMenuDelete_Form(MenuDelete_Form* p_MenuDelete_Form) {
    itsMenuDelete_Form = p_MenuDelete_Form;
}

void Database::_setItsMenuDelete_Form(MenuDelete_Form* p_MenuDelete_Form) {
    if(itsMenuDelete_Form != NULL)
        {
            itsMenuDelete_Form->__setItsDatabase(NULL);
        }
    __setItsMenuDelete_Form(p_MenuDelete_Form);
}

void Database::_clearItsMenuDelete_Form() {
    itsMenuDelete_Form = NULL;
}

void Database::__setItsOrderAdd_Form(OrderAdd_Form* p_OrderAdd_Form) {
    itsOrderAdd_Form = p_OrderAdd_Form;
}

void Database::_setItsOrderAdd_Form(OrderAdd_Form* p_OrderAdd_Form) {
    if(itsOrderAdd_Form != NULL)
        {
            itsOrderAdd_Form->__setItsDatabase(NULL);
        }
    __setItsOrderAdd_Form(p_OrderAdd_Form);
}

void Database::_clearItsOrderAdd_Form() {
    itsOrderAdd_Form = NULL;
}

void Database::__setItsOrderDelete_Form(OrderDelete_Form* p_OrderDelete_Form) {
    itsOrderDelete_Form = p_OrderDelete_Form;
}

void Database::_setItsOrderDelete_Form(OrderDelete_Form* p_OrderDelete_Form) {
    if(itsOrderDelete_Form != NULL)
        {
            itsOrderDelete_Form->__setItsDatabase(NULL);
        }
    __setItsOrderDelete_Form(p_OrderDelete_Form);
}

void Database::_clearItsOrderDelete_Form() {
    itsOrderDelete_Form = NULL;
}

void Database::__setItsOrderEdit_Form(OrderEdit_Form* p_OrderEdit_Form) {
    itsOrderEdit_Form = p_OrderEdit_Form;
}

void Database::_setItsOrderEdit_Form(OrderEdit_Form* p_OrderEdit_Form) {
    if(itsOrderEdit_Form != NULL)
        {
            itsOrderEdit_Form->__setItsDatabase(NULL);
        }
    __setItsOrderEdit_Form(p_OrderEdit_Form);
}

void Database::_clearItsOrderEdit_Form() {
    itsOrderEdit_Form = NULL;
}

void Database::__setItsReservation_Form(Reservation_Form* p_Reservation_Form) {
    itsReservation_Form = p_Reservation_Form;
}

void Database::_setItsReservation_Form(Reservation_Form* p_Reservation_Form) {
    if(itsReservation_Form != NULL)
        {
            itsReservation_Form->__setItsDatabase(NULL);
        }
    __setItsReservation_Form(p_Reservation_Form);
}

void Database::_clearItsReservation_Form() {
    itsReservation_Form = NULL;
}

void Database::__setItsWaiterAdd_Form(WaiterAdd_Form* p_WaiterAdd_Form) {
    itsWaiterAdd_Form = p_WaiterAdd_Form;
}

void Database::_setItsWaiterAdd_Form(WaiterAdd_Form* p_WaiterAdd_Form) {
    if(itsWaiterAdd_Form != NULL)
        {
            itsWaiterAdd_Form->__setItsDatabase(NULL);
        }
    __setItsWaiterAdd_Form(p_WaiterAdd_Form);
}

void Database::_clearItsWaiterAdd_Form() {
    itsWaiterAdd_Form = NULL;
}

void Database::__setItsWaiterDelete_Form(WaiterDelete_Form* p_WaiterDelete_Form) {
    itsWaiterDelete_Form = p_WaiterDelete_Form;
}

void Database::_setItsWaiterDelete_Form(WaiterDelete_Form* p_WaiterDelete_Form) {
    if(itsWaiterDelete_Form != NULL)
        {
            itsWaiterDelete_Form->__setItsDatabase(NULL);
        }
    __setItsWaiterDelete_Form(p_WaiterDelete_Form);
}

void Database::_clearItsWaiterDelete_Form() {
    itsWaiterDelete_Form = NULL;
}

void Database::__setItsWaiterEdit_Form(WaiterEdit_Form* p_WaiterEdit_Form) {
    itsWaiterEdit_Form = p_WaiterEdit_Form;
}

void Database::_setItsWaiterEdit_Form(WaiterEdit_Form* p_WaiterEdit_Form) {
    if(itsWaiterEdit_Form != NULL)
        {
            itsWaiterEdit_Form->__setItsDatabase(NULL);
        }
    __setItsWaiterEdit_Form(p_WaiterEdit_Form);
}

void Database::_clearItsWaiterEdit_Form() {
    itsWaiterEdit_Form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Database.cpp
*********************************************************************/
