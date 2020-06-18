/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Database
//!	Generated Date	: Thu, 18, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Database.h
*********************************************************************/

#ifndef Database_H
#define Database_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsCancelReservation_Form
class CancelReservation_Form;

//## link itsMenuAdd_Form
class MenuAdd_Form;

//## link itsMenuDelete_Form
class MenuDelete_Form;

//## link itsOrderAdd_Form
class OrderAdd_Form;

//## link itsOrderDelete_Form
class OrderDelete_Form;

//## link itsOrderEdit_Form
class OrderEdit_Form;

//## link itsReservation_Form
class Reservation_Form;

//## link itsWaiterAdd_Form
class WaiterAdd_Form;

//## link itsWaiterDelete_Form
class WaiterDelete_Form;

//## link itsWaiterEdit_Form
class WaiterEdit_Form;

//## package Default

//## class Database
class Database {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Database();
    
    //## auto_generated
    ~Database();
    
    ////    Operations    ////
    
    //## operation Show()
    void Show();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getDBGrid() const;
    
    //## auto_generated
    void setDBGrid(int p_DBGrid);
    
    //## auto_generated
    CancelReservation_Form* getItsCancelReservation_Form() const;
    
    //## auto_generated
    void setItsCancelReservation_Form(CancelReservation_Form* p_CancelReservation_Form);
    
    //## auto_generated
    MenuAdd_Form* getItsMenuAdd_Form() const;
    
    //## auto_generated
    void setItsMenuAdd_Form(MenuAdd_Form* p_MenuAdd_Form);
    
    //## auto_generated
    MenuDelete_Form* getItsMenuDelete_Form() const;
    
    //## auto_generated
    void setItsMenuDelete_Form(MenuDelete_Form* p_MenuDelete_Form);
    
    //## auto_generated
    OrderAdd_Form* getItsOrderAdd_Form() const;
    
    //## auto_generated
    void setItsOrderAdd_Form(OrderAdd_Form* p_OrderAdd_Form);
    
    //## auto_generated
    OrderDelete_Form* getItsOrderDelete_Form() const;
    
    //## auto_generated
    void setItsOrderDelete_Form(OrderDelete_Form* p_OrderDelete_Form);
    
    //## auto_generated
    OrderEdit_Form* getItsOrderEdit_Form() const;
    
    //## auto_generated
    void setItsOrderEdit_Form(OrderEdit_Form* p_OrderEdit_Form);
    
    //## auto_generated
    Reservation_Form* getItsReservation_Form() const;
    
    //## auto_generated
    void setItsReservation_Form(Reservation_Form* p_Reservation_Form);
    
    //## auto_generated
    WaiterAdd_Form* getItsWaiterAdd_Form() const;
    
    //## auto_generated
    void setItsWaiterAdd_Form(WaiterAdd_Form* p_WaiterAdd_Form);
    
    //## auto_generated
    WaiterDelete_Form* getItsWaiterDelete_Form() const;
    
    //## auto_generated
    void setItsWaiterDelete_Form(WaiterDelete_Form* p_WaiterDelete_Form);
    
    //## auto_generated
    WaiterEdit_Form* getItsWaiterEdit_Form() const;
    
    //## auto_generated
    void setItsWaiterEdit_Form(WaiterEdit_Form* p_WaiterEdit_Form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int DBGrid;		//## attribute DBGrid
    
    ////    Relations and components    ////
    
    CancelReservation_Form* itsCancelReservation_Form;		//## link itsCancelReservation_Form
    
    MenuAdd_Form* itsMenuAdd_Form;		//## link itsMenuAdd_Form
    
    MenuDelete_Form* itsMenuDelete_Form;		//## link itsMenuDelete_Form
    
    OrderAdd_Form* itsOrderAdd_Form;		//## link itsOrderAdd_Form
    
    OrderDelete_Form* itsOrderDelete_Form;		//## link itsOrderDelete_Form
    
    OrderEdit_Form* itsOrderEdit_Form;		//## link itsOrderEdit_Form
    
    Reservation_Form* itsReservation_Form;		//## link itsReservation_Form
    
    WaiterAdd_Form* itsWaiterAdd_Form;		//## link itsWaiterAdd_Form
    
    WaiterDelete_Form* itsWaiterDelete_Form;		//## link itsWaiterDelete_Form
    
    WaiterEdit_Form* itsWaiterEdit_Form;		//## link itsWaiterEdit_Form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCancelReservation_Form(CancelReservation_Form* p_CancelReservation_Form);
    
    //## auto_generated
    void _setItsCancelReservation_Form(CancelReservation_Form* p_CancelReservation_Form);
    
    //## auto_generated
    void _clearItsCancelReservation_Form();
    
    //## auto_generated
    void __setItsMenuAdd_Form(MenuAdd_Form* p_MenuAdd_Form);
    
    //## auto_generated
    void _setItsMenuAdd_Form(MenuAdd_Form* p_MenuAdd_Form);
    
    //## auto_generated
    void _clearItsMenuAdd_Form();
    
    //## auto_generated
    void __setItsMenuDelete_Form(MenuDelete_Form* p_MenuDelete_Form);
    
    //## auto_generated
    void _setItsMenuDelete_Form(MenuDelete_Form* p_MenuDelete_Form);
    
    //## auto_generated
    void _clearItsMenuDelete_Form();
    
    //## auto_generated
    void __setItsOrderAdd_Form(OrderAdd_Form* p_OrderAdd_Form);
    
    //## auto_generated
    void _setItsOrderAdd_Form(OrderAdd_Form* p_OrderAdd_Form);
    
    //## auto_generated
    void _clearItsOrderAdd_Form();
    
    //## auto_generated
    void __setItsOrderDelete_Form(OrderDelete_Form* p_OrderDelete_Form);
    
    //## auto_generated
    void _setItsOrderDelete_Form(OrderDelete_Form* p_OrderDelete_Form);
    
    //## auto_generated
    void _clearItsOrderDelete_Form();
    
    //## auto_generated
    void __setItsOrderEdit_Form(OrderEdit_Form* p_OrderEdit_Form);
    
    //## auto_generated
    void _setItsOrderEdit_Form(OrderEdit_Form* p_OrderEdit_Form);
    
    //## auto_generated
    void _clearItsOrderEdit_Form();
    
    //## auto_generated
    void __setItsReservation_Form(Reservation_Form* p_Reservation_Form);
    
    //## auto_generated
    void _setItsReservation_Form(Reservation_Form* p_Reservation_Form);
    
    //## auto_generated
    void _clearItsReservation_Form();
    
    //## auto_generated
    void __setItsWaiterAdd_Form(WaiterAdd_Form* p_WaiterAdd_Form);
    
    //## auto_generated
    void _setItsWaiterAdd_Form(WaiterAdd_Form* p_WaiterAdd_Form);
    
    //## auto_generated
    void _clearItsWaiterAdd_Form();
    
    //## auto_generated
    void __setItsWaiterDelete_Form(WaiterDelete_Form* p_WaiterDelete_Form);
    
    //## auto_generated
    void _setItsWaiterDelete_Form(WaiterDelete_Form* p_WaiterDelete_Form);
    
    //## auto_generated
    void _clearItsWaiterDelete_Form();
    
    //## auto_generated
    void __setItsWaiterEdit_Form(WaiterEdit_Form* p_WaiterEdit_Form);
    
    //## auto_generated
    void _setItsWaiterEdit_Form(WaiterEdit_Form* p_WaiterEdit_Form);
    
    //## auto_generated
    void _clearItsWaiterEdit_Form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Database.h
*********************************************************************/
