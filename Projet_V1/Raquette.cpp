#include "Raquette.h"
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Staff_manager												//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
System::String^ NS_Comp_Mappage::Staff_manager::Select_staff(void)
{
	return "SELECT [id_staff], [first_name], [last_name], [hire_date] FROM [Projet_V1].[dbo].[staff]";
}
System::String^ NS_Comp_Mappage::Staff_manager::Insert_staff(void)
{
	return "INSERT INTO staff (first_name, last_name, hire_date, id_address) VALUES ('" + this->first_name + "', '" + this->last_name +"', '" + this->hire_date + ", 100)'); ";
}
System::String^ NS_Comp_Mappage::Staff_manager::Insert_has_staff_address(void)
{
	return "INSERT INTO has_staff_address(id_address, id_type) VALUES(MAX([address].id_address), 3)";
}

System::String^ NS_Comp_Mappage::Staff_manager::Delete_staff(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Staff_manager::Update_staff(void)
{
	return "";
}
void NS_Comp_Mappage::Staff_manager::setLastName(System::String^ last_name)
{
	this->last_name = last_name;
}
void NS_Comp_Mappage::Staff_manager::setFirstName(System::String^ first_name)
{
	this->first_name = first_name;
}
void NS_Comp_Mappage::Staff_manager::setHireDate(System::String^ hire_date)
{
	this->hire_date = hire_date;
}
System::String^ NS_Comp_Mappage::Staff_manager::getLastName(void) { return this->last_name; }
System::String^ NS_Comp_Mappage::Staff_manager::getFirstName(void) { return this->first_name; }
System::String^ NS_Comp_Mappage::Staff_manager::getHireDate(void) { return this->hire_date; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Address_manager												//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
System::String^ NS_Comp_Mappage::Address_manager::Select_adresse(void)
{
	return "SELECT [Id_address], [address1], [city], [Zip_code], [country] FROM [Test_Projet].[dbo].[address]";
}
System::String^ NS_Comp_Mappage::Address_manager::Insert_adresse(void)
{
	return "INSERT INTO address (Address1, City, Zip_code, country) VALUES('" + this->adresse + "','" + this->city + "','" + this->zip + "','" + this->country + "');";
}
System::String^ NS_Comp_Mappage::Address_manager::Delete_address(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Address_manager::Update_address(void)
{
	return "";
}
void NS_Comp_Mappage::Address_manager::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::Address_manager::setCity(System::String^ city)
{
	this->city = city;
}
void NS_Comp_Mappage::Address_manager::setZip(System::String^ zip)
{
	this->zip = zip;
}
void NS_Comp_Mappage::Address_manager::setCountry(System::String^ country)
{
	this->country = country;
}
System::String^ NS_Comp_Mappage::Address_manager::getAdresse(void) { return this->adresse; }
System::String^ NS_Comp_Mappage::Address_manager::getCity(void) { return this->city; }
System::String^ NS_Comp_Mappage::Address_manager::getZip(void) { return this->zip; }
System::String^ NS_Comp_Mappage::Address_manager::getCountry(void) { return this->country; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Client_manager												//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
System::String^ NS_Comp_Mappage::Client_manager::Select_client(void)
{
	return "SELECT [Id_client], [first_name], [last_name], [birthdate], [first_order_date] FROM [Test_Projet].[dbo].[_Client]";
}
System::String^ NS_Comp_Mappage::Client_manager::Insert_client(void)
{
	return "INSERT INTO _Client (first_name, last_name, birthdate, first_order_date) VALUES('" + this->first_name + "','" + this->last_name + "','" + this->birthdate + "','" + this->first_order_date + "');";
}
System::String^ NS_Comp_Mappage::Client_manager::Delete_client(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Client_manager::Update_client(void)
{
	return "";
}
void NS_Comp_Mappage::Client_manager::setLastName(System::String^ last_name)
{
	this->last_name = last_name;
}
void NS_Comp_Mappage::Client_manager::setFirstName(System::String^ first_name)
{
	this->first_name = first_name;
}
void NS_Comp_Mappage::Client_manager::setBirthdate(System::String^ birthdate)
{
	this->birthdate = birthdate;
}
void NS_Comp_Mappage::Client_manager::setFirstOrderDate(System::String^ first_order_date)
{
	this->first_order_date = first_order_date;
}
System::String^ NS_Comp_Mappage::Client_manager::getLastName(void) { return this->last_name; }
System::String^ NS_Comp_Mappage::Client_manager::getFirstName(void) { return this->first_name; }
System::String^ NS_Comp_Mappage::Client_manager::getBirthdate(void) { return this->birthdate; }
System::String^ NS_Comp_Mappage::Client_manager::getFirstOrderDate(void) { return this->first_order_date; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Order_manager												//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

System::String^ NS_Comp_Mappage::Order_manager::Select_order(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Order_manager::Insert_order(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Order_manager::Delete_order(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Order_manager::Update_order(void)
{
	return "";
}
void NS_Comp_Mappage::Order_manager::setOrderNumber(System::String^ order_number)
{
	this->order_number = order_number;
}
void NS_Comp_Mappage::Order_manager::setIssueDate(System::String^ issue_date)
{
	this->issue_date = issue_date;
}
void NS_Comp_Mappage::Order_manager::setDeliveryDate(System::String^ delivery_date)
{
	this->delivery_date = delivery_date;
}
void NS_Comp_Mappage::Order_manager::setPaymentDate1(System::String^ payment_date_1)
{
	this->payment_date_1 = payment_date_1;
}
void NS_Comp_Mappage::Order_manager::setPaymentDate2(System::String^ payment_date_2)
{
	this->payment_date_2 = payment_date_2;
}
void NS_Comp_Mappage::Order_manager::setPaymentDate3(System::String^ payment_date_3)
{
	this->payment_date_3 = payment_date_3;
}
void NS_Comp_Mappage::Order_manager::setOrderDate(System::String^ order_date)
{
	this->order_date = order_date;
}
System::String^ NS_Comp_Mappage::Order_manager::getOrderNumber(void) { return this->order_number; }
System::String^ NS_Comp_Mappage::Order_manager::getIssueDate(void) { return this->issue_date; }
System::String^ NS_Comp_Mappage::Order_manager::getDeliveryDate(void) { return this->delivery_date; }
System::String^ NS_Comp_Mappage::Order_manager::getPaymentDate1(void) { return this->payment_date_1; }
System::String^ NS_Comp_Mappage::Order_manager::getPaymentDate2(void) { return this->payment_date_2; }
System::String^ NS_Comp_Mappage::Order_manager::getPaymentDate3(void) { return this->payment_date_3; }
System::String^ NS_Comp_Mappage::Order_manager::getOrderDate(void) { return this->order_date; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Stock_manager												//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

System::String^ NS_Comp_Mappage::Stock_manager::Select_stock(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Stock_manager::Insert_stock(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Stock_manager::Delete_stock(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::Stock_manager::Update_stock(void)
{
	return "";
}
void NS_Comp_Mappage::Stock_manager::setArticleName(System::String^ article_name)
{
	this->article_name = article_name;
}
void NS_Comp_Mappage::Stock_manager::setUnitPriceExclTax(System::String^ unit_price_excl_tax)
{
	this->unit_price_excl_tax = unit_price_excl_tax;
}
void NS_Comp_Mappage::Stock_manager::setQuantityInStock(System::String^ quantity_in_stock)
{
	this->quantity_in_stock = quantity_in_stock;
}
void NS_Comp_Mappage::Stock_manager::setReorderPoint(System::String^ reorder_point)
{
	this->reorder_point = reorder_point;
}
void NS_Comp_Mappage::Stock_manager::setVat(System::String^ vat)
{
	this->vat = vat;
}
void NS_Comp_Mappage::Stock_manager::setQuantitySold(System::String^ quantity_sold)
{
	this->quantity_sold = quantity_sold;
}

System::String^ NS_Comp_Mappage::Stock_manager::getArticleName(void) { return this->article_name; }
System::String^ NS_Comp_Mappage::Stock_manager::getUnitPriceExclTax(void) { return this->unit_price_excl_tax; }
System::String^ NS_Comp_Mappage::Stock_manager::getQuantityInStock(void) { return this->quantity_in_stock; }
System::String^ NS_Comp_Mappage::Stock_manager::getReorderPoint(void) { return this->reorder_point; }
System::String^ NS_Comp_Mappage::Stock_manager::getVat(void) { return this->vat; }
System::String^ NS_Comp_Mappage::Stock_manager::getQuantitySold(void) { return this->quantity_sold; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Nature_manager												//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//System::String^ NS_Comp_Mappage::Nature_manager::Select_Nature(void)
//{
//	return "SELECT * FROM [Projet_V1].[dbo].[nature]";
//}

//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::Client_manager();
	this->oMappStaff = gcnew NS_Comp_Mappage::Staff_manager();
	this->oMappAddress = gcnew NS_Comp_Mappage::Address_manager();
}
//---------------------------------------------------------------------------------------------------------------------------

System::Data::DataSet^ NS_Comp_Svc::CLservices::SelectAllTheStaff(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStaff->Select_staff();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::SelectAllTheClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappClient->Select_client();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::AddStaffMember(System::String^ last_name, System::String^ first_name, System::String^ hire_date)
{
	System::String^ sql;

	this->oMappStaff->setLastName(last_name);
	this->oMappStaff->setFirstName(first_name);
	this->oMappStaff->setHireDate(hire_date);
	sql = this->oMappStaff->Insert_staff();
	//sql += this->oMappStaff->Insert_has_staff_address();
	this->oCad->actionRows(sql);

}
//---------------------------------------------------------------------------------------------------------------------------

System::Data::DataSet^ NS_Comp_Svc::CLservices::SelectAllTheAddress(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappAddress->Select_adresse();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::AddAddress(System::String^ address, System::String^ city, System::String^ zip, System::String^ country)
{
	System::String^ sql;

	this->oMappAddress->setAdresse(address);
	this->oMappAddress->setCity(city);
	this->oMappAddress->setZip(zip);
	this->oMappAddress->setCountry(country);
	sql = this->oMappAddress->Insert_adresse();

	this->oCad->actionRows(sql);
}

//---------------------------------------------------------------------------------------------------
//System::Data::DataSet^ NS_Comp_Svc::CLservices::SelectAllTheNature(System::String^ dataTableName)
//{
//	System::String^ sql;
//
//	sql = this->oMappNature->Select_Nature();
//	return this->oCad->getRows(sql, dataTableName);
//}
//---------------------------------------------------------------------------------------------------

