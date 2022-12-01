#pragma once
#include "Connexion_DB.h"
namespace NS_Comp_Mappage
{
	ref class Staff_manager
	{
	private:
		System::String^ last_name;
		System::String^ first_name;
		System::String^ hire_date;

	public:
		System::String^ Select_staff(void);
		System::String^ Insert_staff(void);
		System::String^ Delete_staff(void);
		System::String^ Update_staff(void);


		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setHireDate(System::String^);

		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		System::String^ getHireDate(void);
		
	};

	ref class Address_manager {
	private:
		System::String^ adresse;
		System::String^ city;
		System::String^ zip;
		System::String^ country;

	public:
		System::String^ Select_adresse(void);
		System::String^ Insert_adresse(void);
		System::String^ Delete_address(void);
		System::String^ Update_address(void);


		void setAdresse(System::String^);
		void setCity(System::String^);
		void setZip(System::String^);
		void setCountry(System::String^);

		System::String^ getAdresse(void);
		System::String^ getCity(void);
		System::String^ getZip(void);
		System::String^ getCountry(void);
	};

	ref class Client_manager {
	private:
		System::String^ last_name;
		System::String^ first_name;
		System::String^ birthdate;
		System::String^ first_order_date;

	public:
		System::String^ Select_client(void);
		System::String^ Insert_client(void);
		System::String^ Delete_client(void);
		System::String^ Update_client(void);


		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setBirthdate(System::String^);
		void setFirstOrderDate(System::String^);

		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		System::String^ getBirthdate(void);
		System::String^ getFirstOrderDate(void);
	};

	ref class Order_manager {
	private:
		System::String^ order_number;
		System::String^ issue_date;
		System::String^ delivery_date;
		System::String^ payment_date_1;
		System::String^ payment_date_2;
		System::String^ payment_date_3;
		System::String^ order_date;

	public:
		System::String^ Select_order(void);
		System::String^ Insert_order(void);
		System::String^ Delete_order(void);
		System::String^ Update_order(void);


		void setOrderNumber(System::String^);
		void setIssueDate(System::String^);
		void setDeliveryDate(System::String^);
		void setPaymentDate1(System::String^);
		void setPaymentDate2(System::String^);
		void setPaymentDate3(System::String^);
		void setOrderDate(System::String^);

		System::String^ getOrderNumber(void);
		System::String^ getIssueDate(void);
		System::String^ getDeliveryDate(void);
		System::String^ getPaymentDate1(void);
		System::String^ getPaymentDate2(void);
		System::String^ getPaymentDate3(void);
		System::String^ getOrderDate(void);
	};

	ref class Stock_manager {
	private:
		System::String^ article_name;
		System::String^ unit_price_excl_tax;
		System::String^ quantity_in_stock;
		System::String^ reorder_point;
		System::String^ vat;
		System::String^ quantity_sold;

	public:
		System::String^ Select_stock(void);
		System::String^ Insert_stock(void);
		System::String^ Delete_stock(void);
		System::String^ Update_stock(void);


		void setArticleName(System::String^);
		void setUnitPriceExclTax(System::String^);
		void setQuantityInStock(System::String^);
		void setReorderPoint(System::String^);
		void setVat(System::String^);
		void setQuantitySold(System::String^);

		System::String^ getArticleName(void);
		System::String^ getUnitPriceExclTax(void);
		System::String^ getQuantityInStock(void);
		System::String^ getReorderPoint(void);
		System::String^ getVat(void);
		System::String^ getQuantitySold(void);
	};

	ref class Nature_manager {
		System::String^ nature_type;

		System::String^ Select_Nature();

		void setNatureType(System::String^);

		System::String^ getNatureType(void);
	};
};



namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Staff_manager^ oMappStaff;
		NS_Comp_Mappage::Address_manager^ oMappAddress;
		NS_Comp_Mappage::Nature_manager^ oMappNature;
	public:
		CLservices(void);
		System::Data::DataSet^ SelectAllTheStaff(System::String^);
		System::Data::DataSet^ SelectAllTheNature(System::String^);
		System::Data::DataSet^ SelectAllTheAddress(System::String^);
		void AddStaffMember(System::String^, System::String^, System::String^);
		void AddAddress(System::String^, System::String^, System::String^);
	};
};

