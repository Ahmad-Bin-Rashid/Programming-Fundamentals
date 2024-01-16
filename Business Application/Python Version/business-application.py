import os
import msvcrt
import time
import pandas as pd

def main():

    code ="manager123"
    id ="employ123"
    ownerCode = "motors123"
    ownerUsername = "admin123"
    managerUsername = "alisher"
    employeeUsername = "ahmad"
    customerUsername = "aslam"
    ownerPassword = "123456"
    managerPassword = "1234"
    employeePassword = "1234"
    customerPassword = "1234"
    
    backOption = ''
    login_Option1 = ""
    login_Option2 = ""
    interface1_Option = ""
    interface2_Option = ""
    interface3_Option = ""
    temporaryUsername = ""
    username = ""
    password = ""
    passcode = ""

    managerCount = 0
    managerName = ["" * 5]
    managerUsername = ["" * 5]
    managerPassword = ["" * 5]
    managerPhoneNumber = ["" * 5]
    managerCNIC = ["" * 5]
    managerSalary = ["" * 5]
    
    employeeCount = 0
    employeeName = ["" * 50]
    employeeUsername = ["" * 50]
    employeePassword = ["" * 50]
    employeePhoneNumber = ["" * 50]
    employeeCNIC = ["" * 50]
    employeeSalary = ["" * 50]
	
    customerCount = 0;
    customerName = ["" * 200]
    customerUsername = ["" * 200]
    customerPassword = ["" * 200]
    customerPhoneNumber = ["" * 200]
    
    checkManager = False
    checkEmployee = False
    checkCustomer = False
    eligible = False
    
    ownerNoticesCount = 0;
    ownerNotices = ["" * 200]
	
    managerNoticesCount = 0;
    managerNotices = ["" * 200]
	
    managerMessagesCount = 0;
    managerName2 = ["" * 200]
    managerUsername2 = ["" * 200]
    managerMessages = ["" * 200]
	
    employeeMessagesCount = 0;
    employeeName2 = ["" * 200]
    employeeUsername2 = ["" * 200]
    employeeMessages = ["" * 200]
	
    customerCommentsCount = 0;
    commentingCustomerName = ["" * 200]
    commentingCustomerUsername = ["" * 200]
    customerComments = ["" * 200]
	
    customer4ServiceCount = 0;
    customer4ServiceName = ["" * 200]
    customer4ServiceUsername = ["" * 200]
    serviceVehicleMake = ["" * 200]
    serviceVehicleName = ["" * 200]
	
    customer4DriveCount = 0;
    customer4DriveName = ["" * 200]
    customer4DriveUsername = ["" * 200]
    customer4DriveVehicle = ["" * 200]
    vehicles4Drive = ["Land Rover", "Ford Ranger", "BMW 8 Series Gran Coupe", "BMW 3 Series Touring", "Mercedes-Benz E-Class Saloon", "Jaguar I-PACE", "Tesla Model 3"];
	
    vehicleCount = 0
    vehicleMake = ["" * 100]
    vehicleName = ["" * 100]
    vehicleStock = ["" * 100]
    vehiclePrice = ["" * 100]
	
    productCount = 0;
    productName = ["" * 100]
    productStock = ["" * 100]
    productPrice = ["" * 100]
	
    buyVehicleCustomerCount = 0;
    buyVehicleCustomerName = ["" * 100]
    buyVehicleCustomerPhoneNumber = ["" * 100]
    buyVehicleName = ["" * 100]
    buyVehicleMake = ["" * 100]
    buyVehiclePrice = ["" * 100]
    buyVehiclePayment = ["" * 100]
	
    buyProductCustomerCount = 0;
    buyProductCustomerName = ["" * 100]
    buyProductCustomerPhoneNumber = ["" * 100]
    buyProductName = ["" * 100]
    buyProductPrice = ["" * 100]
    buyProductPayment = ["" * 100]

    managers = get_manager_data ()
    employees = get_employee_data()
    customers = get_customer_data()
    vehicles = get_vehicle_data()
    # products = get_products_data()
    comments = get_comments_data()

    printHeader1()
    while True:
        printHeader2()
        printMenu("LOGIN")
        login_Option1 = loginMenu1()
        if (login_Option1 == "1" or login_Option1 == "2" or login_Option1 == "3" or login_Option1 == "4" or login_Option1 == "5"):
            
            if login_Option1 == "1":
                while True:
                    printHeader2()
                    printMenu("OWNER")
                    login_Option2 = loginMenu2()
                    if (login_Option2 == "1" or login_Option2 == "2"):
                        
                        if (login_Option2 == "1"):

                            printHeader2()
                            printMenu("OWNER SIGNIN")
                            
                            passcode = checkPasscode (passcode, "Enter Owner Passcode: ")
                            if (passcode != ownerCode):

                                printMessage("Wrong Passcode. You are not the Owner!!")
                                break
                            
                            username, password = inputCredentials(username, password)
                            if (username == ownerUsername and password == ownerPassword):

                                printMessage("You SignedIn Successfully...")

                                while True:

                                    printHeader2()
                                    printMenu("OWNER")

                                    interface1_Option = ownerMenu()
                                    if (interface1_Option == "1" or interface1_Option == "2" or interface1_Option == "3" or interface1_Option == "4" or interface1_Option == "5" or interface1_Option == "6" or interface1_Option == "7" or interface1_Option == "8" or interface1_Option == "9" or interface1_Option == "10"):
                                        
                                        if (interface1_Option == "1"):
                                            
                                            while True:

                                                printHeader2()
                                                printMenu("COMMUNICATE MANAGERS")

                                                interface2_Option =  communicate_managers_menu()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3"):
                                                    
                                                    if (interface2_Option == "1"):  

                                                        printHeader2()
                                                        printMenu("ANNOUNCEMENTS")
                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        owner_notices, owner_notices_count = owner_announcements (ownerNotices, ownerNoticesCount)
                                                        printMessage ("Your message has been delivered...")


                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("MANAGER MESSAGES")
                                                        receive_manager_messages_menu (managerName2, managerUsername2, managerMessages, managerMessagesCount)

                                                    elif (interface2_Option == "3"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "2"):
                                            printHeader2()
                                            printMenu("VIEW MANAGERS")
                                            view_managers_menu (managers)

                                        elif (interface1_Option == "3"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("MANAGE MANAGER")
                                                interface2_Option = manage_manager_menu()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4" or interface2_Option == "5"):

                                                    if (interface2_Option == "1"):
                                                        eligible = False

                                                        printHeader2()
                                                        printMenu("ADD MANAGER")
                                                        
                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        managers = add_manager_menu(managers)

                                                        # if (eligible == True):
                                                        store_data (managers, 'managers_data.csv')
                                                        printMessage("Manager Account Created Successfully...")
                                                        # managerCount += 1
                                                        #     # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)
                                                        #     continue
                                                            
                                                        # elif eligible == False:
                                                        #     printMessage("Username already exists. Please try again using other Credentials...")
                                                        #     continue

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("UPDATE MANAGER")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        managers = update_manager_details_menu(managers)
                                                        store_data (managers, 'managers_data.csv')
                                                        printMessage("Manager updated Successfully...")
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("REMOVE MANAGER")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(remove_manager_menu(managers))
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "5"):

                                                        printHeader2()
                                                        printMenu("UPDATE MANAGER SALARY")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        managers = update_manager_salary_menu(managers)
                                                        store_data (managers, 'managers_data.csv')
                                                        printMessage("Manager updated Successfully...")
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "4"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "4"):
                                            printHeader2()
                                            printMenu("VIEM EMPLOYEES")
                                            view_employees_menu (employees)
                                        
                                        elif (interface1_Option == "5"):
                                            printHeader2()
                                            printMenu("VIEM VEHICLES")
                                            view_vehicle_details_menu(vehicles)
                                        
                                        elif (interface1_Option == "6"):
                                            printHeader2()
                                            printMenu("VIEM PRODUCTS")
                                            view_product_details_menu(products)
                                                                               
                                        elif (interface1_Option == "7"):
                                            printHeader2()
                                            printMenu("VIEM EXPENSES")
                                            view_expenses_menu(managers, employees)
                                                                              
                                        elif (interface1_Option == "8"):
                                            printHeader2()
                                            printMenu("VIEM COMMENTS")
                                            view_comments_menu(comments)
                                                                             
                                        elif (interface1_Option == "9"):
                                            break

                                        elif (interface1_Option == "10"):
                                            # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary);
											# storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary);
											# storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber);
											# storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice);
											# storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice);
											# storeVehicleServiceData ("VehicleService_Data.txt", customer4ServiceCount, customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName);
											# storeTestDerivesData ("TestDrives_Data.txt", customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle);
											# storeCommentsData ("Comments_Data.txt", customerCommentsCount, commentingCustomerName, commentingCustomerUsername, customerComments);
                                            return 0

                                    else:
                                        printMessage("Invalid Input. Try again!!")
                                        continue
                                
                            else:
                                printMessage("Wrong Credentials!!")
                                continue
                            
                        elif (login_Option2 == "2"):
                            break
                    
                    else:
                        printMessage("Invalid Input. Try again!!")
                        continue

            elif login_Option1 == "2":
                while True:
                    printHeader2()
                    printMenu("MANAGER")
                    login_Option2 = loginMenu2()
                    if (login_Option2 == "1" or login_Option2 == "2"):
                        
                        if (login_Option2 == "1"):
                            
                            checkManager = False
                            printHeader2()
                            printMenu("MANAGER SIGNIN")
                            
                            passcode = checkPasscode (passcode, "Enter Company Passcode: ")
                            if (passcode != code):
                                printMessage("Wrong Passcode. You are not the Manager!!")
                                break
                            
                            username, password = inputCredentials(username, password)
                            # checkManager = checkUser (username, password, managerUsername, managerPassword, managerCount)
                            if (True):
                            # if (checkManager):
                                printMessage("You SignedIn Successfully...")
                                temporaryUsername = username

                                while True:

                                    printHeader2()
                                    printMenu("OWNER")

                                    interface1_Option = manager_menu()
                                    if (interface1_Option == "1" or interface1_Option == "2" or interface1_Option == "3" or interface1_Option == "4" or interface1_Option == "5" or interface1_Option == "6" or interface1_Option == "7" or interface1_Option == "8" or interface1_Option == "9" or interface1_Option == "10" or interface1_Option == "11" or interface1_Option == "12" or interface1_Option == "13" or interface1_Option == "14" or interface1_Option == "15" or interface1_Option == "16"):
                                        
                                        if (interface1_Option == "1"):
                                            printHeader2()
                                            printMenu("ANNOUNCEMENTS")
                                            show_owner_announcements(ownerNotices, ownerNoticesCount)
                                        
                                        elif (interface1_Option == "2"):
                                            printHeader2()
                                            printMenu("COMMUNICATE OWNER")

                                            backOption = goBackMessage()
                                            if (backOption == '\b'):
                                                continue
                                            printMessage(contact_owner_menu (managerCount, managerName, managerUsername, temporaryUsername, managerName2, managerUsername2, managerMessages, managerMessagesCount))
                                        
                                        elif (interface1_Option == "3"):
                                            printHeader2()
                                            printMenu("VIEW VEHICLES")
                                            view_vehicle_details_menu(vehicles)
                                        
                                        elif (interface1_Option == "4"):
                                            while True:
                                                printHeader2()
                                                printMenu("MODIFY VEHICLES")
                                                interface2_Option = modify_vehicles_menu ()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4"):

                                                    if (interface2_Option == "1"):
                                                        printHeader2()
                                                        printMenu("ADD VEHICLE")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(add_vehicle_menu (vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice))
                                                        # storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice)

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("UPDATE VEHICLE")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(update_vehicle_menu (vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice))
                                                        # storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice)

                                                    
                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("REMOVE VEHICLE")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(remove_vehicle_menu (vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice))
                                                        # storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice)
                                                    
                                                    elif (interface2_Option == "4"):
                                                        break
                                                
                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "5"):
                                            printHeader2()
                                            printMenu("VIEW PRODUCTS")
                                            view_product_details_menu (productCount, productName, productStock, productPrice)
                                        
                                        elif (interface1_Option == "6"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("MODIFY PRODUCTS")
                                                interface2_Option = modify_product_menu ()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4"):

                                                    if (interface2_Option == "1"):
                                                        printHeader2()
                                                        printMenu("ADD PRODUCTS")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(add_product_menu (productCount, productName, productStock, productPrice))
                                                        # storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice)

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("UPDATE PRODUCTS")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(update_product_menu (productCount, productName, productStock, productPrice))
                                                        # storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice)

                                                    
                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("REMOVE PRODUCTS")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(remove_product_menu (productCount, productName, productStock, productPrice))
                                                        # storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice)
                                                    
                                                    elif (interface2_Option == "4"):
                                                        break
                                                
                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "7"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("SOLD ITEMS")
                                                interface2_Option = sold_items_menu ()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3"):

                                                    if (interface2_Option == "1"):
                                                        
                                                        printHeader2()
                                                        printMenu("SOLD VEHICLES")
                                                        sold_vehicles_menu (buyVehicleCustomerCount, buyVehicleCustomerName, buyVehicleCustomerPhoneNumber, buyVehicleName, buyVehicleMake, buyVehiclePrice, buyVehiclePayment)

                                                    elif (interface2_Option == "2"):
                                                        
                                                        printHeader2()
                                                        printMenu("SOLD PRODUCTS")
                                                        sold_products_menu (buyProductCustomerCount, buyProductCustomerName, buyProductCustomerPhoneNumber, buyProductName, buyProductPrice, buyProductPayment)
   
                                                    elif (interface2_Option == "3"):
                                                        break
                                                
                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "8"):
                                            printHeader2()
                                            printMenu("VIEW EMPLOYEES")
                                            view_employees_menu (employees)
                                        
                                        elif (interface1_Option == "9"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("MANAGE EMPLOYEES")
                                                interface2_Option = manage_employee_menu()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4" or interface2_Option == "5"):

                                                    if (interface2_Option == "1"):
                                                        eligible = False

                                                        printHeader2()
                                                        printMenu("ADD EMPLOYEE")
                                                        
                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        eligible = add_employee_menu(employeeCount, employeeUsername, employeePassword, employeeName, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                        if (eligible == True):
                                                            printMessage("\e[1;32mEmployee Account Created Successfully...")
                                                            employeeCount += 1
                                                            # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)
                                                            continue
                                                            
                                                        elif eligible == False:
                                                            printMessage("\e[1;33mUsername already exists. Please try again using other Credentials...")
                                                            continue

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("UPDATE EMPLOYEE")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(update_employee_details_menu(employeeCount, employeeUsername, employeePassword, employeeName, employeePhoneNumber, employeeCNIC))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("REMOVE EMPLOYEE")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        employees = remove_employee_menu(employees)
                                                        printMessage('Employee removed Successfully!')
                                                        store_data(employees, 'employees_data.csv')
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "5"):

                                                        printHeader2()
                                                        printMenu("UPDATE EMPLOYEE SALARY")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(update_employee_salary_menu(employeeCount, employeeUsername, employeePassword, employeeName, employeeSalary))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "4"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "10"):
                                            printHeader2()
                                            printMenu("SERVICE DETAILS")
                                            service_details_menu (customer4ServiceCount,  customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName)
                                        
                                        elif (interface1_Option == "11"):
                                            printHeader2()
                                            printMenu("TEST DRIVES DETAILS")
                                            test_drive_details_menu (customer4DriveCount,  customer4DriveName, customer4DriveUsername, customer4DriveVehicle)
                                        
                                        elif (interface1_Option == "12"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("COMMUNICATE EMPLOYEES")
                                                interface2_Option = communicate_employees_menu ()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3"):

                                                    if (interface2_Option == "1"):
                                                        
                                                        printHeader2()
                                                        printMenu("ANNOUNCEMENTS")

                                                        backOption = goBackMessage()
                                                        if (backOption == '\b'):
                                                            continue

                                                        printMessage(manager_announcements (managerNotices, managerNoticesCount))

                                                    elif (interface2_Option == "2"):
                                                        
                                                        printHeader2()
                                                        printMenu("EMPLOYEE MESSAGES")
                                                        receive_employee_messages_menu (employeeName2, employeeUsername2, employeeMessages, employeeMessagesCount)
   
                                                    elif (interface2_Option == "3"):
                                                        break
                                                
                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "13"):
                                            printHeader2()
                                            printMenu("VIEW COMMENTS")
                                            view_comments_menu (comments)
                                        
                                        elif (interface1_Option == "14"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("ACCOUNT SETTING")
                                                interface2_Option = account_setting_menu()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4" or interface2_Option == "5" or interface2_Option == "6"):

                                                    if (interface2_Option == "1"):

                                                        printHeader2()
                                                        printMenu("CHANGE NAME")
                                                        printMessage(change_profile (managerCount, managerUsername, temporaryUsername, managerName, "Name"))
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("CHANGE USERNAME")

                                                        printMessage(change_username (managerCount, managerUsername, temporaryUsername, "Username"))
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("CHANGE PASSWORD")

                                                        printMessage(change_profile (managerCount, managerUsername, temporaryUsername, managerPassword, "Password"))
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "4"):

                                                        printHeader2()
                                                        printMenu("CHANGE NUMBER")

                                                        printMessage(change_profile (managerCount, managerUsername, temporaryUsername, managerPhoneNumber, "Mobile Number"))
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)

                                                    elif (interface2_Option == "5"):

                                                        printHeader2()
                                                        printMenu("CHANGE CNIC")

                                                        printMessage(change_profile (managerCount, managerUsername, temporaryUsername, managerCNIC, "CNIC"))
                                                        # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary)
                                                    
                                                    elif (interface2_Option == "6"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                            
                                        elif (interface1_Option == "15"):
                                            break

                                        elif (interface1_Option == "16"):
                                            # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary);
											# storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary);
											# storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber);
											# storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice);
											# storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice);
											# storeVehicleServiceData ("VehicleService_Data.txt", customer4ServiceCount, customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName);
											# storeTestDerivesData ("TestDrives_Data.txt", customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle);
											# storeCommentsData ("Comments_Data.txt", customerCommentsCount, commentingCustomerName, commentingCustomerUsername, customerComments);
                                            return 0

                                    else:
                                        printMessage("Invalid Input. Try again!!")
                                        continue
                            
                            else:
                                printMessage("Wrong Credentials!!")
                                continue
                            
                        elif (login_Option2 == "2"):
                            break
                    
                    else:
                        printMessage("Invalid Input. Try again!!")
                        continue
            
            elif login_Option1 == "3":
                while True:
                    printHeader2()
                    printMenu("EMPLOYEE")
                    login_Option2 = loginMenu2()
                    if (login_Option2 == "1" or login_Option2 == "2"):
                        if (login_Option2 == "1"):

                            checkManager = False

                            printHeader2()
                            printMenu("EMPLOYEE SIGNIN")
                            
                            passcode = checkPasscode (passcode, "To confirm that you are an Employee enter ID provided by Manager: ")
                            if (passcode != id):
                                printMessage("Wrong ID. You are not the Employee!!")
                                break
                            
                            username, password = inputCredentials(username, password)
                            # checkManager = checkUser (username, password, managerUsername, managerPassword, managerCount)
                            # if (checkManager):
                            if (True):

                                printMessage("You SignedIn Successfully...")
                                temporaryUsername = username

                                while True:

                                    printHeader2()
                                    printMenu("EMPLOYEE")

                                    interface1_Option = employee_menu()
                                    if (interface1_Option == "1" or interface1_Option == "2" or interface1_Option == "3" or interface1_Option == "4" or interface1_Option == "5" or interface1_Option == "6" or interface1_Option == "7" or interface1_Option == "8" or interface1_Option == "9" or interface1_Option == "10"):
                                        
                                        if (interface1_Option == "1"):
                                            printHeader2()
                                            printMenu("ANNOUNCEMENTS")
                                            show_manager_announcements (managerNotices, managerNoticesCount)
                                        
                                        elif (interface1_Option == "2"):
                                            printHeader2()
                                            printMenu("COMMUNICATE MANAGER")

                                            backOption = goBackMessage()
                                            if (backOption == '\b'):
                                                continue
                                            printMessage(contact_manager_menu (employeeCount, employeeName, employeeUsername, temporaryUsername, employeeName2, employeeUsername2, employeeMessages, employeeMessagesCount))
                                        
                                        elif (interface1_Option == "3"):
                                            printHeader2()
                                            printMenu("VIEW VEHICLES")
                                            view_vehicle_details_menu(vehicles)
                                        
                                        elif (interface1_Option == "4"):
                                            printHeader2()
                                            printMenu("VIEW PRODUCTS")
                                            view_product_details_menu (products)
                                        
                                        elif (interface1_Option == "5"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("SOLD ITEMS")
                                                interface2_Option = sold_items_menu ()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3"):

                                                    if (interface2_Option == "1"):
                                                        
                                                        printHeader2()
                                                        printMenu("SOLD VEHICLES")
                                                        sold_vehicles_menu (buyVehicleCustomerCount, buyVehicleCustomerName, buyVehicleCustomerPhoneNumber, buyVehicleName, buyVehicleMake, buyVehiclePrice, buyVehiclePayment)

                                                    elif (interface2_Option == "2"):
                                                        
                                                        printHeader2()
                                                        printMenu("SOLD PRODUCTS")
                                                        sold_products_menu (buyProductCustomerCount, buyProductCustomerName, buyProductCustomerPhoneNumber, buyProductName, buyProductPrice, buyProductPayment)
   
                                                    elif (interface2_Option == "3"):
                                                        break
                                                
                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "6"):
                                            
                                            printHeader2()
                                            printMenu("SERVICE DETAILS")
                                            service_details_menu (customer4ServiceCount,  customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName)
                                        
                                        elif (interface1_Option == "7"):
                                            
                                            printHeader2()
                                            printMenu("TEST DRIVES DETAILS")
                                            test_drive_details_menu (customer4DriveCount,  customer4DriveName, customer4DriveUsername, customer4DriveVehicle)
                                        
                                        elif (interface1_Option == "8"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("ACCOUNT SETTING")
                                                interface2_Option = account_setting_menu()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4" or interface2_Option == "5" or interface2_Option == "6"):

                                                    if (interface2_Option == "1"):

                                                        printHeader2()
                                                        printMenu("CHANGE NAME")
                                                        printMessage(change_profile (employeeCount, employeeUsername, temporaryUsername, employeeName, "Name"))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("CHANGE USERNAME")

                                                        printMessage(change_username(employeeCount, employeeUsername, temporaryUsername, "Username"))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("CHANGE PASSWORD")

                                                        printMessage(change_profile (employeeCount, employeeUsername, temporaryUsername, employeePassword, "Password"))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "4"):

                                                        printHeader2()
                                                        printMenu("CHANGE NUMBER")

                                                        printMessage(change_profile (employeeCount, employeeUsername, temporaryUsername, employeePhoneNumber, "Mobile Number"))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)

                                                    elif (interface2_Option == "5"):

                                                        printHeader2()
                                                        printMenu("CHANGE CNIC")

                                                        printMessage(change_profile (employeeCount, employeeUsername, temporaryUsername, employeeCNIC, "CNIC"))
                                                        # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary)
                                                    
                                                    elif (interface2_Option == "6"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "9"):
                                            break
                                        
                                        elif (interface1_Option == "10"):
                                            # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary);
											# storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary);
											# storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber);
											# storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice);
											# storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice);
											# storeVehicleServiceData ("VehicleService_Data.txt", customer4ServiceCount, customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName);
											# storeTestDerivesData ("TestDrives_Data.txt", customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle);
											# storeCommentsData ("Comments_Data.txt", customerCommentsCount, commentingCustomerName, commentingCustomerUsername, customerComments);
                                            return 0

                                    else:
                                        printMessage("Invalid Input. Try again!!")
                                        continue
                                
                            else:
                                printMessage("Wrong Credentials!!")
                                continue
                            
                        elif (login_Option2 == "2"):
                            break
                    else:
                        printMessage("Invalid Input. Try again!!")
                        continue
            
            elif login_Option1 == "4":
                
                while True:
                    printHeader2()
                    printMenu("CUSTOMER LOGIN")
                    login_Option2 = customerLoginMenu()
                    if (login_Option2 == "1" or login_Option2 == "2" or login_Option2 == "3"):
                        
                        if (login_Option2 == "1"):
                            
                            checkManager = False
                            printHeader2()
                            printMenu("CUSTOMER SIGNIN")
                            
                            createAccountMessage()
                            backOption = goBackMessage()
                            if (backOption == '\b'):
                                continue
                            
                            username, password = inputCredentials(username, password)
                            # checkCustomer = checkUser (username, password, customerUsername, customerPassword, customerCount)
                            # if (checkCustomer):
                            if (True):
                                printMessage("You SignedIn Successfully...")
                                temporaryUsername = username

                                while True:

                                    printHeader2()
                                    printMenu("CUSTOMER")

                                    interface1_Option = customer_menu()
                                    if (interface1_Option == "1" or interface1_Option == "2" or interface1_Option == "3" or interface1_Option == "4" or interface1_Option == "5" or interface1_Option == "6" or interface1_Option == "7" or interface1_Option == "8" or interface1_Option == "9" or interface1_Option == "10"):
                                        
                                        if (interface1_Option == "1"):
                                            printHeader2()
                                            printMenu("VIEW VEHICLES")
                                            view_vehicle_details_menu(vehicles)

                                        elif (interface1_Option == "2"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("BUY VEHICLE")
                                                interface2_Option = buy_product_menu("Vehicle")

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4"):

                                                    if (interface2_Option == "1"):

                                                        printHeader2()
                                                        printMenu("CHOOSE VEHICLE")
                                                        choose_vehicle_menu (vehicles)
                                                        
                                                    elif (interface2_Option == "2"):
                                                        
                                                        while True:
                                                            printHeader2()
                                                            printMenu("PAYMENT METHOD")
                                                            payment_method_menu ()
                                                            break

                                                            if (interface3_Option == "1" or interface3_Option == "2" or interface3_Option == "3" or interface3_Option == "4"):
                                                                
                                                                if (interface3_Option == "1"):
                                                                    printHeader2()
                                                                    printMenu("PAYMENT METHOD")
                                                                    # printMessage(paymentMethodMenu2 (vehicleCount, vehicleName, buyVehicleCustomerCount, buyVehicleName, buyVehiclePayment, "Immediate Cash Payment", "Vehicle"))

                                                                elif (interface3_Option == "2"):
                                                                    printHeader2()
                                                                    printMenu("PAYMENT METHOD")
                                                                    # printMessage(paymentMethodMenu2 (vehicleCount, vehicleName, buyVehicleCustomerCount, buyVehicleName, buyVehiclePayment, "Payment by Credit Card", "Vehicle"))

                                                                elif (interface3_Option == "3"):
                                                                    printHeader2()
                                                                    printMenu("PAYMENT METHOD")
                                                                    # printMessage(paymentMethodMenu2 (vehicleCount, vehicleName, buyVehicleCustomerCount, buyVehicleName, buyVehiclePayment, "Payment By Bank", "Vehicle"))

                                                                elif (interface3_Option == "4"):
                                                                    break

                                                            else:
                                                                printMessage("Invalid Input. Try again!!")
                                                                continue

                                                    elif (interface2_Option == "3"):

                                                        printHeader2()
                                                        printMenu("PRINT BILL")
                                                        # printMessage(vehicleBillMenu (vehicleCount, vehicleName, vehicleStock, buyVehicleCustomerCount, buyVehicleCustomerName, buyVehicleCustomerPhoneNumber, buyVehicleName, buyVehicleMake, buyVehiclePrice, buyVehiclePayment))
                                                        # storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice)

                                                    elif (interface2_Option == "4"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "3"):
                                            printHeader2()
                                            printMenu("VIEW PRODUCTS")
                                            view_product_details_menu (productCount, productName, productStock, productPrice)
                                        
                                        elif (interface1_Option == "4"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("BUY PRODUCT")
                                                # interface2_Option = buy_product_menu("Product")

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4"):

                                                    if (interface2_Option == "1"):

                                                        printHeader2()
                                                        printMenu("CHOOSE PRODUCT")
                                                        # printMessage(chooseProductMenu (customerCount, customerUsername, temporaryUsername, customerName, customerPhoneNumber, productCount, productName, productPrice, buyProductCustomerCount, buyProductCustomerName, buyProductCustomerPhoneNumber, buyProductName, buyProductPrice))
                                                        
                                                    elif (interface2_Option == "2"):
                                                        
                                                        while True:
                                                            printHeader2()
                                                            printMenu("PAYMENT METHOD")
                                                            # interface3_Option = payment_method_menu1 ()

                                                            if (interface3_Option == "1" or interface3_Option == "2" or interface3_Option == "3" or interface3_Option == "4"):
                                                                
                                                                if (interface3_Option == "1"):
                                                                    printHeader2()
                                                                    printMenu("PAYMENT METHOD")
                                                                    # printMessage(paymentMethodMenu2 (productCount, productName, buyProductCustomerCount, buyProductName, buyProductPayment, "Immediate Cash Payment", "Product"))

                                                                elif (interface3_Option == "2"):
                                                                    printHeader2()
                                                                    printMenu("PAYMENT METHOD")
                                                                    # printMessage(paymentMethodMenu2 (productCount, productName, buyProductCustomerCount, buyProductName, buyProductPayment, "Payment by Credit Card", "Product"))

                                                                elif (interface3_Option == "3"):
                                                                    printHeader2()
                                                                    printMenu("PAYMENT METHOD")
                                                                    # printMessage(paymentMethodMenu2 (productCount, productName, buyProductCustomerCount, buyProductName, buyProductPayment, "Payment By Bank", "Product"))

                                                                elif (interface3_Option == "4"):
                                                                    break

                                                            else:
                                                                printMessage("Invalid Input. Try again!!")
                                                                continue

                                                    elif (interface2_Option == "3"):

                                                        printHeader2()
                                                        printMenu("PRINT BILL")
                                                        # productBillMenu (productCount, productName, productStock, buyProductCustomerCount, buyProductCustomerName, buyProductCustomerPhoneNumber, buyProductName, buyProductPrice, buyProductPayment)
                                                        # storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice)

                                                    elif (interface2_Option == "4"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                        
                                        elif (interface1_Option == "5"):
                                            
                                            printHeader2()
                                            printMenu("SERVICE REGISTRATION")
                                            backOption = goBackMessage()
                                            if (backOption == '\b'):
                                                continue

                                            # service_registration_menu (customerCount, customerUsername, customerName, temporaryUsername, customer4ServiceCount,  customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName)
                                            # storeVehicleServiceData ("VehicleService_Data.txt", customer4ServiceCount, customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName)

                                        elif (interface1_Option == "6"):
                                            printHeader2()
                                            printMenu("TEST DRIVES REGISTRATION")
                                            backOption = goBackMessage()
                                            if (backOption == '\b'):
                                                continue

                                            # drive_registration_menu (customerCount, customerUsername, customerName, temporaryUsername, customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle, vehicles4Drive)
                                            # storeTestDerivesData ("TestDrives_Data.txt", customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle)
                                        
                                        elif (interface1_Option == "7"):
                                            printHeader2()
                                            printMenu("SERVICE REGISTRATION")
                                            backOption = goBackMessage()
                                            if (backOption == '\b'):
                                                continue

                                            # printMessage(add_comments_menu (customerCount, customerUsername, customerName, temporaryUsername, customerCommentsCount,  commentingCustomerName, commentingCustomerUsername, customerComments))
                                            # storeCommentsData ("Comments_Data.txt", customerCommentsCount, commentingCustomerName, commentingCustomerUsername, customerComments)
                                        
                                        elif (interface1_Option == "8"):
                                            
                                            while True:
                                                printHeader2()
                                                printMenu("ACCOUNT SETTING")
                                                # interface2_Option = customer_account_setting_menu()

                                                if (interface2_Option == "1" or interface2_Option == "2" or interface2_Option == "3" or interface2_Option == "4" or interface2_Option == "5"):

                                                    if (interface2_Option == "1"):

                                                        printHeader2()
                                                        printMenu("CHANGE NAME")
                                                        printMessage(change_profile (customerCount, customerUsername, temporaryUsername, customerName, "Name"))
                                                        # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber)

                                                    elif (interface2_Option == "2"):
                                                        printHeader2()
                                                        printMenu("CHANGE USERNAME")

                                                        printMessage(change_username(customerCount, customerUsername, temporaryUsername, "Username"))
                                                        # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber)

                                                    elif (interface2_Option == "3"):
                                                        printHeader2()
                                                        printMenu("CHANGE PASSWORD")

                                                        printMessage(change_profile (customerCount, customerUsername, temporaryUsername, customerPassword, "Password"))
                                                        # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber)

                                                    elif (interface2_Option == "4"):

                                                        printHeader2()
                                                        printMenu("CHANGE NUMBER")

                                                        printMessage(change_profile (customerCount, customerUsername, temporaryUsername, customerPhoneNumber, "Mobile Number"))
                                                        # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber)

                                                    elif (interface2_Option == "5"):
                                                        break

                                                else:
                                                    printMessage("Invalid Input. Try again!!")
                                                    continue
                                                                                                               
                                        elif (interface1_Option == "9"):
                                            break
                                        
                                        elif (interface1_Option == "10"):
                                            # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary);
				                            # storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary);
			                                # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber);
				                            # storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice);
				                            # storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice);
				                            # storeVehicleServiceData ("VehicleService_Data.txt", customer4ServiceCount, customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName);
				                            # storeTestDerivesData ("TestDrives_Data.txt", customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle);
				                            # storeCommentsData ("Comments_Data.txt", customerCommentsCount, commentingCustomerName, commentingCustomerUsername, customerComments);
                                            return 0
                                    
                                    else:
                                        printMessage("Invalid Input. Try again!!")
                                        continue

                            else:
                                printMessage("Wrong Credentials!!")
                                continue
                            
                        elif (login_Option2 == "2"):

                            eligible = False

                            printHeader2()
                            printMenu("CUSTOMER SIGNUP")
                                                        
                            backOption = goBackMessage()
                            if (backOption == '\b'):
                                continue

                            # eligible = customer_signup_menu (customerCount, customerUsername, customerPassword, customerName, customerPhoneNumber)

                            if (eligible == True):
                                printMessage("\e[1;32mYou SignedUp Successfully...")
                                customerCount += 1
                                # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber)
                                continue
                                                            
                            elif eligible == False:
                                printMessage("\e[1;33mUsername already exists. Please try again using other Credentials...")
                                continue

                        elif (login_Option2 == "3"):
                            break
                    
                    else:
                        printMessage("Invalid Input. Try again!!")
                        continue
            
            elif login_Option1 == "5":
                # storeUsersData ("Managers_Data.txt", managerCount, managerName, managerUsername, managerPassword, managerPhoneNumber, managerCNIC, managerSalary);
				# storeUsersData ("Employees_Data.txt", employeeCount, employeeName, employeeUsername, employeePassword, employeePhoneNumber, employeeCNIC, employeeSalary);
			    # storeCustomerData ("Customers_Data.txt", customerCount, customerName, customerUsername, customerPassword, customerPhoneNumber);
				# storeVehiclesData ("Vehicles_Data.txt", vehicleCount, vehicleMake, vehicleName, vehicleStock, vehiclePrice);
				# storeProductsData ("Products_Data.txt", productCount, productName, productStock, productPrice);
				# storeVehicleServiceData ("VehicleService_Data.txt", customer4ServiceCount, customer4ServiceName, customer4ServiceUsername, serviceVehicleMake, serviceVehicleName);
				# storeTestDerivesData ("TestDrives_Data.txt", customer4DriveCount, customer4DriveName, customer4DriveUsername, customer4DriveVehicle);
				# storeCommentsData ("Comments_Data.txt", customerCommentsCount, commentingCustomerName, commentingCustomerUsername, customerComments);
                return 0
        
        else:
            printMessage("Invalid Input!! Try again...")
            continue






def printHeader1():
    os.system("cls")
    print("\033[1;35m")                # Set text color to red
    print("""
                                                                                 (          (                           
                                                           (       (             )\ )      ))\ )  (                     
                                                           )\))(   )\\     (  (  (()/( )  /(()/(  )\\                    
                                                          ((_)()((((_)()   )\\ )\\ /(_))( )(_))(_)|((_)                   
                                                          (_()((_)\ _ )\\ ((_|(_)(_)) (_(_()|_)) )\\___                   
                                                          |  \\/  (_)_\\(_) | | __/ __||_   _|_ _((/ __|                  
                                                          | |\\/| |/ _ \\| || | _|\\__ \\  | |  | | | (__                   
                                                          |_|  |_|/_/ )_\\__/|___|_)_/( |_|(|___| \\___|                  
                                                                                                                        
                                           (      ( /(       ) ( /(  )\\ ) )\\ )   (       (     )\\ ) )\\ )     )\\ ) ( /(  
                                           )\\))(  )\\())` )  /( )\\())(()/(()/(   )\\ )    )\\   (()/(()/( (  (()/( )\\()) 
                                          ((_)()\\((_)\  ( )(_)|(_)\  /(_))/(_)) (()/( ((((_)(  /(_))/(_)))\\  /(_)|(_)\  
                                          (_()((_) ((_)(_(_())  ((_)(_)) (_))    /(_))_)\\ _ )\\(_)) (_)) ((_)(_))__ ((_) 
                                          |  \\/  |/ _ \\|_   _| / _ \\| _ \\/ __|  (_)) __(_)_\\(_) |  | |  | __| _ \\ \\ / / 
                                          | |\\/| | (_) | | |  | (_) |   /\\__ \\    | (_ |/ _ \\ | |__| |__| _| |   /\\ V /  
                                          |_|  |_|\\___/  |_|   \\___/|_|_\\|___/     \\___/_/ \\_\\|____|____|___|_|_\\ |_|   

          


                                                                          L O A D I N G
    """)

    print("\t\t\t\t\t\t        ", end="")
    for _ in range(25):
        ch = '\u2588'
        print(ch + ch, end="", flush= True)
        time.sleep(0.06)


def printHeader2():
    os.system("cls")
    print("\033[1;35m")
    print()
    
    print("              @@@     @@@  @@@@@@@      @@  @@@@@@  @@@@@@  @@@@@@@@  @@@@@@    @@@@@         @@@     @@@     @@@@@    @@@@@@@@    @@@@@     @@@@@@   @@@@@@      ")
    print("              @@@@   @@@@  @@   @@      @@  @@   @  @@   @  @@ @@ @@    @@     @@   @         @@@@   @@@@    @@   @@   @@ @@ @@   @@   @@    @@   @   @@   @      ")
    print("              @@@@@@@@@@@  @@   @@      @@  @@       @@     @  @@  @    @@    @@              @@@@@@@@@@@   @@     @@  @  @@  @  @@     @@   @@   @    @@         ")
    print("              @@  @@@  @@  @@   @@      @@  @@@@      @@       @@       @@   @@               @@  @@@  @@  @@       @@    @@    @@       @@  @@@@@@     @@        ")
    print("              @@  @@@  @@  @@@@@@@      @@  @@         @@      @@       @@    @@              @@  @@@  @@   @@     @@     @@     @@     @@   @@ @        @@       ")
    print("              @@   @   @@  @@   @@  @   @@  @@   @  @   @@     @@       @@     @@   @         @@   @   @@    @@   @@      @@      @@   @@    @@  @    @   @@      ")
    print("              @@       @@  @@   @@  @@@@@@  @@@@@@  @@@@@@     @@     @@@@@@    @@@@@         @@       @@     @@@@@       @@       @@@@@     @@   @@  @@@@@@      ")
    print()
    print("                                                          @@@@       @@    @@     @@     @@@@@@@  @@@@@@   @@   @ ")
    print("                                                         @@        @@@@@   @@     @@     @@    @  @@    @   @@ @  ")
    print("                                                        @@  @@@   @@   @@  @@     @@     @@@@     @@@@@@     @@   ")
    print("                                                        @@    @   @@@@@@@  @@  @  @@  @  @@    @  @@   @     @    ")
    print("                                                         @@@@@@   @@   @@  @@@@@  @@@@@  @@@@@@@  @@    @   @     ")
    
    print("\033[0;33m")                                    # Set text color to yellow
    print("\t\t\t\t\t\t\t\t\t---( PYTHON VERSION )---\n")


def printMessage(message):
    print("\033[1;33m")                                    # Set text color to red
    print(f"\t\t\t\t{message}\n")
    time.sleep(1.1)


def printMenu(message):
    print("\033[0;34m")                                           # Set text color to green
    print(f"\t\t\t\t\t\t\t\t\t---( {message} MENU )---\n")


def createAccountMessage():
    print("\033[1;37m")                         # Set text color to white

    print("\t\t If you don't have any account, Please go back and create your account...\n")


def goBackMessage():
    print("\033[0;33m")                                # Set text color to yellow
    print("\t\t Enter Backspace Key to go back.", end="\n")
    print("\t\t Enter any other key to proceed: ")
    
    option = msvcrt.getch().decode("utf-8")
    print()
    return option


def checkPasscode(passcode, message):
    print("\033[1;36m")
    passcode = input(f"\t\t\t {message}")
    print()
    return passcode


# Change This ->
def inputCredentials(username, password):
    print("\033[1;36m")  # Set text color to bright yellow
    while True:
        username = input("\t\t\t Enter User Name (Spaces and symbols not allowed): ")
        if username.isalnum():
            break;
        else:
            print("'\r\r'Rewrite!!")
    
    password = input("\n\t\t\t Enter Password:")
    
    return username,password


def loginMenu1():
    print("\033[1;32m")                               # Set text color to bright yellow
    print("\t\t You want to Login as: \n")
    print("\033[1;36m")                               # Set text color to bright blue
    print("\t\t\t 1) OWNER\n")
    print("\t\t\t 2) MANAGER\n")
    print("\t\t\t 3) EMPLOYEE\n")
    print("\t\t\t 4) CUSTOMER\n\n")
    print("\t\t\t 5) Exit Application\n\n")
    print("\033[90m")                               # Set text color to grey
    option = input("\t\t Enter Your Option (1-5): ")
    return option


def loginMenu2():
    option = ""

    print("\033[1;32m")
    print("\t\t Select one of these: ")
    print("\033[1;36m")
    print("\n\t\t\t 1) SignIn")
    print("\n\t\t\t 2) Go Back")
    print("\033[90m")
    option = input("\n\t\t Enter Your Option (1-2): ")

    return option


def customerLoginMenu():
    option = ""
    print("\033[1;32m")
    print("\t\t Select one of these: ")
    print("\033[1;36m")
    print("\n\t\t\t 1) SignIn")
    print("\n\t\t\t 2) SignUp")
    print("\n\t\t\t 3) Go Back")
    print("\033[90m")
    option = input("\n\t\t Enter Your Option (1-3): ")
    

    return option


def ownerMenu():
    option = ""

    print("\033[1;32m")
    print("\t\t Choose what you want to do.... ")
    print("\033[1;36m")
    print("\n\t\t\t 1) Communicate Managers")
    print("\n\t\t\t 2) View Managers Details")
    print("\n\t\t\t 3) Manage Managers")
    print("\n\t\t\t 4) View Employees Details")
    print("\n\t\t\t 5) View Vehicles Details")
    print("\n\t\t\t 6) View Associated Products Details")
    print("\n\t\t\t 7) View Expenses")
    print("\n\t\t\t 8) View Feedbacks and Opinions")
    print("\n\t\t\t 9) Sign out")
    print("\n\t\t\t10) Exit Application")

    print("\033[90m")
    option = input("\n\t\t Enter Your Option (1-10): ")

    return option


def communicate_managers_menu():
    option = ""

    print("\033[1;32m")
    print("\t\t Choose what you want to do.... ")
    print("\033[1;36m")
    print("\n\t\t\t 1) Announce Important Message")
    print("\n\t\t\t 2) Message received by Managers")
    print("\n\t\t\t 3) Go Back")
    
    print("\033[90m")
    option = input("\n\t\t Enter Your Option (1-3): ")

    return option


def owner_announcements(owner_notices, owner_notices_count):
    
    print("\033[1;32m")
    print("\t\t Announce Important Message to Managers: ")
    
    print("\033[1;36m")
    owner_notice = input("\n\t\t\t Your Announcement: ")
    owner_notices.append(owner_notice)
    owner_notices_count += 1
    
    return owner_notices, owner_notices_count


def receive_manager_messages_menu(manager_name, manager_username, manager_messages, manager_messages_count):
    
    if manager_messages_count == 0:
        print()
        print("\033[1;32m")
        print("\t\t No messages received by any Manager yet.")
    elif manager_messages_count > 0:
        print("\n")
        print("\033[1;33m")
        print("  {:<7} {:<10} {:<15} {:<10}".format("SrNo.", "Name", "UserName", "Message"))
        print("\033[1;31m")
        for x in range(manager_messages_count):
            print("  {:<7} {:<10} {:<15} {:<10}".format(x + 1, manager_name[x], manager_username[x], manager_messages[x]))
    print("\n\n")
    print("\033[90m")
    input("\t\t Press Enter to continue...")


def view_managers_menu(managers):
    print("\n")
    # if !(managers['Names']):
    #     print("\033[1;32m")
    #     print("\t\t No Manager Added Yet!!")
    # else:
    print("\033[0;32m")
    print (managers)
        # print(" {:<15} {:<30} {:<30} {:<30} {:<30} {:<30}".format("SrNo.", "Name", "Username", "Mobile Number", "CNIC", "Salary"))
        # print("\033[0;34m")
        # for x in range(manager_count):
        #     print(" {:<15} {:<30} {:<30} {:<30} {:<30} {:<30}".format(x + 1, manager_name[x], manager_username[x], manager_phone_number[x], manager_cnic[x], manager_salary[x]))
    print("\n")
    print("\033[90m")
    print("\t\t Press Enter to continue...")
    msvcrt.getch().decode('utf-8')


def manage_manager_menu():
    option = ""

    print("\033[1;32m")
    print("\t\t Choose what you want to do.... ")
    print("\033[1;36m")
    print("\n\t\t\t 1) Add a Manager")
    print("\n\t\t\t 2) Update Manager Details")
    print("\n\t\t\t 3) Remove a Manager")
    print("\n\n\t\t\t 4) Go Back")
    print("\033[90m")
    option = input("\n\t\t Enter Your Option (1-4): ")

    return option


def add_manager_menu(managers):
    eligible = False
    # print("\t\t Press Tab Key to Enter...")

    print("\033[0;36m")

    print("\n\t\t\t Enter Manager Full Name: ", end="")
    name = nameValidation(15, 1)
    print("\n\t\t\t Enter Manager User Name (4-10 characters): ", end="")
    username = usernameValidation(10, 4)
    print("\n\t\t\t Enter Manager Password (4-10 characters): ", end="")
    password = passwordValidation(10, 4)
    print("\n\t\t\t Enter Manager Mobile Number (11 digits): ", end="")
    number = numberValidation(11, 11)
    print("\n\t\t\t Enter Manager CNIC (13 digits): ", end="")
    cnic = numberValidation(13, 13)
    print("\n\t\t\t Enter Manager Salary (4-7 digits): ", end="")
    salary = numberValidation(7, 4)

    data = [name,username,password,number,cnic,salary]

    managers.loc[len(managers.index)] = data

    # eligible = check_account_eligibility(manager_username, manager_count)
    return managers


def update_manager_details_menu(managers):
    # if manager_count == 0:
    #     return "No Manager to Update..."
    print("\033[1;32m")
    temp = input("\t\t\t Enter Username of the Manager you want to Update: ")

    # index = -1
    # check = False

    # for x in range(manager_count):
    #     if name == manager_username[x]:
    #         index = x
    #         check = True

    # if not check:
    #     return "No Manager exists with this Username..."
    idx = managers[managers['Username'] == temp].index

    print("\033[1;32m")
    print("\t Details of the Manager before Update: ")
    print("\033[1;36m")
    print (managers[managers['Username']== temp])
    # print(" {:<30} {:<30} {:<30} {:<30} {:<30}".format("Name", "Username", "Password", "Mobile Number", "CNIC"))
    # print(" {:<30} {:<30} {:<30} {:<30} {:<30}\n".format(manager_name[index], manager_username[index], manager_password[index], manager_phone_number[index], manager_cnic[index]))

    # print("\t\t Press Tab Key to Enter... \n\n\n")
    while True:
        print("\033[1;32m")
        temp1 = input("\n\t You want to change: name / username / number / cnic / salary / none: ")
        print("\033[1;33m")
        if temp1 == 'name':
            name = input("\t\t\t Enter new Full Name: ")
            managers.loc[idx, 'Name'] = name
        
        elif temp1 == 'username':
            username = input("\t\t\t Enter new User Name: ")
            managers.loc[idx, 'Username'] = username
        
        elif temp1 == 'number':
            number = input("\t\t\t Enter new Mobile Number (11 digits): ")
            managers.loc[idx, 'Number'] = number
        
        elif temp1 == 'cnic':
            cnic = input("\t\t\t Enter new CNIC (13 digits): ")
            managers.loc[idx, 'CNIC'] = cnic

        elif temp1 == 'salary':
            salary = input("\t\t\t Enter new Salary (4-7 digits): ")
            managers.loc[idx, 'Salary'] = salary

        elif temp1 == 'none':
            break
    
    print("\033[1;32m")
    print("\n\t Details of the Manager after Update: ")
    print("\033[1;36m")
    print (managers[managers['Username']== username])
    
    # print(" {:<30} {:<30} {:<30} {:<30} {:<30}".format("Name", "Username", "Password", "Mobile Number", "CNIC"))
    # print(" {:<30} {:<30} {:<30} {:<30} {:<30}\n".format(manager_name[index], manager_username[index], manager_password[index], manager_phone_number[index], manager_cnic[index]))

    print("\033[90m")
    print("\n\t\t Press any key to Continue...")
    msvcrt.getch().decode('utf-8')

    return managers


def remove_manager_menu(manager_count, manager_username, manager_password, manager_name, manager_phone_number, manager_cnic, manager_salary):
    if manager_count == 0:
        return "No Manager to Remove..."

    name = input("\t\t\t Enter Username of the Manager you want to Remove: ")

    index = -1
    check = False

    for x in range(manager_count):
        if name == manager_username[x]:
            index = x
            check = True

    if not check:
        return "No Manager exists with this Username..."

    for y in range(index, manager_count - 1):
        manager_username[y] = manager_username[y + 1]
        manager_password[y] = manager_password[y + 1]
        manager_name[y] = manager_name[y + 1]
        manager_phone_number[y] = manager_phone_number[y + 1]
        manager_cnic[y] = manager_cnic[y + 1]
        manager_salary[y] = manager_salary[y + 1]

    manager_count -= 1

    return "Manager removed Successfully..."


def update_manager_salary_menu(managers):
    # if manager_count == 0:
    #     return "No Manager to Update..."

    temp = input("\t\t\t Enter Username of the manager you want to Update: ")

    # index = -1
    # check = False

    # for x in range(manager_count):
    #     if name == manager_username[x]:
    #         index = x
    #         check = True

    # if not check:
    #     return "No Manager exists with this Username..."
    idx = managers[managers['Username'] == temp].index

    print("\n\n Salary of Manager before Update: ")
    print (managers[managers['Username']== temp])
    
    # print(" {:<30} {:<30} {:<30}".format("Name", "Username", "Salary"))
    # print(" {:<30} {:<30} {:<30}\n".format(manager_name[index], manager_username[index], manager_salary[index]))

    # print("\t\t Press Tab Key to Enter... \n\n\n")

    salary = input("\t\t\t Enter new Salary (4-7 digits): ")
    managers.loc[idx, 'Salary'] = salary
    # manager_salary[index] = numberValidation(7, 4)

    print("\n\n Salary of Manager after Update: \n")
    print (managers[managers['Username']== temp])
    # print(" {:<30} {:<30} {:<30}".format("Name", "Username", "Salary"))
    # print(" {:<30} {:<30} {:<30}\n".format(manager_name[index], manager_username[index], manager_salary[index]))

    print("\n\n Press any key to Continue...")
    msvcrt.getch().decode('utf-8')

    return managers


def view_expenses_menu(manager_salary, employee_salary):
    employee_salaries = sum(map(int, employee_salary))
    manager_salaries = sum(map(int, manager_salary))
    service_center = 600000
    showroom = 700000
    other = 200000
    total = manager_salaries + employee_salaries + service_center + showroom + other

    print("\t\t Details of Expenses are given below... :\n")
    print("      {:<30} {:<30} {:<30} {:<30} {:<30}".format("Total Manager Salaries", "Total Employees Salaries", "Service Center Expenses", "Showroom Expenses", "Other Expenses"))
    print("      {:<30} {:<30} {:<30} {:<30} {:<30}\n".format(manager_salaries, employee_salaries, service_center, showroom, other))

    print("\t\t {:<30} {:<50}".format("Grand Total", total))

    print("\n\n Press any key to Continue...")
    input()


def view_comments_menu(comments):
    
    print("\033[1;32m")
    print (comments)
    # if customer_comments_count == 0:
    #     print("\t\t No comments given by Customers yet...\n")
    # else:
    #     print("\t\t {:<10} {:<10} {:<15} {:<10} | Comments".format("SrNo.", "Name", "UserName", ""))
    #     for x in range(customer_comments_count):
    #         print("\t\t {:<10} {:<10} {:<15} {:<10} | {}".format(x + 1, commenting_customer_name[x], commenting_customer_username[x], "", customer_comments[x]))

    print("\033[90m")
    print("\n\t\t Press any key to continue...")
    input()


def manager_menu():
    option = ""
    print("\033[1;32m")
    print ("\t\t Choose what you want to do.... \n\n")
    print("\033[1;36m")
    print ("\t\t\t  1) Important Announcements\n")
    print ("\t\t\t  2) Contact to Owner\n")
    print ("\t\t\t  3) View Vehicles Details\n")
    print ("\t\t\t  4) Modify Vehicles Details\n")
    print ("\t\t\t  5) View Associated Products Details\n")
    print ("\t\t\t  6) Modify Associated Products Details\n")
    print ("\t\t\t  7) Sold Vehicles and Products\n")
    print ("\t\t\t  8) View Employees Details\n")
    print ("\t\t\t  9) Manage Employees\n")
    print ("\t\t\t 10) Scheduled Registrations for Service\n")
    print ("\t\t\t 11) Scheduled Registrations for Test Drives\n")
    print ("\t\t\t 12) Communicate Employees\n")
    print ("\t\t\t 13) View Feedbacks and Opinions\n")
    print ("\t\t\t 14) Account Settings\n")
    print ("\t\t\t 15) Sign out\n")
    print ("\t\t\t 16) Exit Application\n\n")
    print("\033[90m")
    option = input ("\t\t Enter Your Option (1-16): ")

    return option


def show_owner_announcements(owner_notices, owner_notices_count):
    if owner_notices_count == 0:
        print("\033[1;31m")
        print("1)           Do your work honestly!\n")
    else:
        print("\033[1;32m")
        print("\t\t Important Announcements by Owner are: \n")
        print("\033[1;33m")
        for x in range(owner_notices_count):
            print("  {:<15} {}".format(x + 1, owner_notices[x]))

    print("\033[90m")
    print("\n\t\t Press any key to continue...")
    input()


def contact_owner_menu(manager_count, manager_name, manager_username, temporary_username, manager_name_2, manager_username_2, manager_messages, manager_messages_count):
    index = 0

    for x in range(manager_count):
        if temporary_username == manager_username[x]:
            index = x

    manager_name_2[manager_messages_count] = manager_name[index]
    manager_username_2[manager_messages_count] = manager_username[index]

    print("\t\t Deliver your message to Owner... \n")
    print("\t\t\tEnter your Message: ", end="")
    manager_messages[manager_messages_count] = input()

    manager_messages_count += 1
    return "Your message has been delivered to the Owner Successfully..."


def view_vehicle_details_menu(vehicles):
    
    print("\033[1;32m")
    print (vehicles)
    # if vehicle_count == 0:
    #     print("\t\t No Vehicles Available...\n")
    # else:
    #     print(" {:<15} {:<35} {:<35} {:<35} {:<35}".format("SrNo.", "Make", "Name", "Stock", "Price"))
    #     for x in range(vehicle_count):
    #         print(" {:<15} {:<35} {:<35} {:<35} {:<35}".format(x + 1, vehicle_make[x], vehicle_name[x], vehicle_stock[x], vehicle_price[x]))

    print("\033[90m")
    print("\n\t\t Press any key to continue...")
    input()


def modify_vehicles_menu():
    option = ""
    print("\033[1;32m")
    print("\t\t Choose what you want to do.... \n")
    print("\033[1;36m")
    print ("\t\t\t 1) Add Vehicle\n")
    print ("\t\t\t 2) Update Vehicle\n")
    print ("\t\t\t 3) Remove Vehicle\n")
    print ("\t\t\t 4) Go Back\n")
    print("\033[90m")
    option = input ("\t\t Enter Your Option (1-4): ")

    return option


def add_vehicle_menu(vehicle_count, vehicle_make, vehicle_name, vehicle_stock, vehicle_price):
    temp1 = input("\t\t Enter the Make of Vehicle: ")
    temp2 = input("\t\t Enter the Name of Vehicle: ")

    # eligible = check_eligibility(vehicle_name, temp2, vehicle_count)
    # if not eligible:
        # return "Error!! Vehicle already exists..."

    vehicle_make.append(temp1)
    vehicle_name.append(temp2)

    print("\t\t Press Tab Key to Enter... \n\n\n")

    vehicle_stock.append(numberValidation(4, 1, "\t\t Enter the Stock of Vehicle: "))
    vehicle_price.append(numberValidation(9, 5, "\t\t Enter the Price of Vehicle: "))

    vehicle_count += 1
    return "New Vehicle has been added successfully..."


def update_vehicle_menu(vehicle_count, vehicle_make, vehicle_name, vehicle_stock, vehicle_price):
    make = input("\t\t Enter the Make of the Vehicle you Want to Update: ")
    name = input("\t\t Enter the Name of the Vehicle you Want to Update: ")

    index = None
    check = False

    if vehicle_count == 0:
        return "No vehicle to Update..."

    for x in range(vehicle_count):
        if make == vehicle_make[x] and name == vehicle_name[x]:
            index = x
            check = True

    if not check:
        return "No vehicle exists with this Name or Make..."

    print("\n\n")
    print("\t Details of Vehicle before Update: \n\n")
    print(" {:<30} {:<30} {:<30} {:<30}".format("Make", "Name", "Stock", "Price"))
    print(" {:<30} {:<30} {:<30} {:<30}".format(vehicle_make[index], vehicle_name[index], vehicle_stock[index], vehicle_price[index]))
    print("\n\t\t Press Tab Key to Enter... \n\n\n")

    vehicle_stock[index] = numberValidation(4, 1, "\t\t\t Enter new Stock: ")
    vehicle_price[index] = numberValidation(9, 5, "\t\t\t Enter new Price: ")

    print("\n\n")
    print("\t Details of Vehicle after Update: \n\n")
    print(" {:<30} {:<30} {:<30} {:<30}".format("Make", "Name", "Stock", "Price"))
    print(" {:<30} {:<30} {:<30} {:<30}".format(vehicle_make[index], vehicle_name[index], vehicle_stock[index], vehicle_price[index]))

    print("\n\n")
    print("\t\t Press any key to Continue...")
    input()

    return "Vehicle updated Successfully..."


def remove_vehicle_menu(vehicle_count, vehicle_make, vehicle_name, vehicle_stock, vehicle_price):
    make = input("\t\t Enter the Make of the Vehicle you Want to Remove: ")
    name = input("\t\t Enter the Name of the Vehicle you Want to Remove: ")

    index = None
    check = False

    if vehicle_count == 0:
        return "No vehicle to Remove..."

    for x in range(vehicle_count):
        if make == vehicle_make[x] and name == vehicle_name[x]:
            index = x
            check = True

    if not check:
        return "No vehicle exists with this Name or Model..."

    for y in range(index, vehicle_count - 1):
        vehicle_make[y] = vehicle_make[y + 1]
        vehicle_name[y] = vehicle_name[y + 1]
        vehicle_stock[y] = vehicle_stock[y + 1]
        vehicle_price[y] = vehicle_price[y + 1]

    vehicle_count -= 1

    return "Vehicle removed Successfully..."


def view_product_details_menu(product_count, product_name, product_stock, product_price):
    if product_count == 0:
        print("\n\t\t No Products Available...\n")
    else:
        print("  {:<15} {:<30} {:<30} {:<30}".format("SrNo.", "Name", "Stock", "Price"))
        for x in range(product_count):
            print("  {:<15} {:<30} {:<30} {:<30}\n".format(x + 1, product_name[x], product_stock[x], product_price[x]))

    print("\n\t\t Press any key to continue...")


def modify_product_menu():
    option = input("\t\t Choose you want to do.... \n\n"
                   "\t\t\t 1) Add Product\n\n"
                   "\t\t\t 2) Update Product\n\n"
                   "\t\t\t 3) Remove Product\n\n"
                   "\t\t\t 4) Go Back\n\n"
                   "\t\t Enter Your Option (1-4): ")

    return option


def add_product_menu(product_count, product_name, product_stock, product_price):
    index = product_count
    temp = input("\t\t Enter the Name of Product: ")

    # Assuming check_eligibility is a function that checks if the product already exists
    # eligible = check_eligibility(product_name, temp, product_count)

    # if not eligible:
        # return "Error!! Product already exists..."

    print("\t\t Press Tab Key to Enter...\n\n\n")
    
    product_name[index] = temp
    product_stock[index] = numberValidation(4, 1)
    product_price[index] = numberValidation(9, 2)
    product_count += 1
    
    return "New Product has been added successfully..."


def update_product_menu(product_count, product_name, product_stock, product_price):
    if product_count == 0:
        return "No product to Update..."

    name = input("\t\t Enter the Name of the Product you Want to Update: ")

    index = -1
    check = False
    for x in range(product_count):
        if name == product_name[x]:
            index = x
            check = True

    if not check:
        return "No product exists with this Name..."

    print("\n\n")
    print("\t Details of Product before Update: \n\n")
    print("\t   {:<30}{:<30}{:<30}".format("Name", "Stock", "Price"))
    print("\t   {:<30}{:<30}{:<30}".format(product_name[index], product_stock[index], product_price[index]))
    print("\n\n")
    print("\t\t Press Tab Key to Enter...\n\n\n")

    product_stock[index] = numberValidation(4, 1)
    product_price[index] = numberValidation(9, 2)

    print("\n\n")
    print("\t Details of Product after Update: \n\n")
    print("\t   {:<30}{:<30}{:<30}".format("Name", "Stock", "Price"))
    print("\t   {:<30}{:<30}{:<30}".format(product_name[index], product_stock[index], product_price[index]))
    print("\n\n")
    print("\t\t Press any key to Continue...")
    input()  # This simulates getch()

    return "Product updated Successfully..."


def remove_product_menu(product_count, product_name, product_stock, product_price):
    if product_count == 0:
        return "No product to Remove..."

    name = input("\t Enter the Name of the Product you Want to Remove: ")

    index = -1
    check = False
    for x in range(product_count):
        if name == product_name[x]:
            index = x
            check = True

    if not check:
        return "No product exists with this Name..."

    for y in range(index, product_count - 1):
        product_name[y] = product_name[y + 1]
        product_stock[y] = product_stock[y + 1]
        product_price[y] = product_price[y + 1]

    product_count -= 1

    return "Product removed Successfully..."


def sold_items_menu():
    option = input("\t\t Select From the Following... \n\n"
                   "\t\t\t 1) Sold Vehicles\n\n"
                   "\t\t\t 2) Sold Products\n\n"
                   "\t\t\t 3) Go Back\n\n"
                   "\t\t Enter Your Option (1-3): ")
    return option


def sold_vehicles_menu(buy_vehicle_customer_count, buy_vehicle_customer_name, buy_vehicle_customer_phone_number, buy_vehicle_name, buy_vehicle_make, buy_vehicle_price, buy_vehicle_payment):
    if buy_vehicle_customer_count == 0:
        print("\t\t No Vehicle has been purchased till now...")
    
    print("\t\t Vehicles Purchased :", buy_vehicle_customer_count)
    print(" "+ "{:<10}".format("SrNo.") + "{:<20}".format("Name") + "{:<20}".format("Phone Number") + "{:<20}".format("Vehicle Make") +
          "{:<20}".format("Vehicle Name") + "{:<20}".format("Vehicle Price") + "{:<20}".format("Payment Method"))
    for x in range(buy_vehicle_customer_count):
        print(" "+ "{:<10}".format(x + 1) + "{:<20}".format(buy_vehicle_customer_name[x]) + "{:<20}".format(buy_vehicle_customer_phone_number[x]) +
              "{:<20}".format(buy_vehicle_make[x]) + "{:<20}".format(buy_vehicle_name[x]) + "{:<20}".format(buy_vehicle_price[x]) +
              "{:<20}".format(buy_vehicle_payment[x]))
    
    print("\n\t\t Press any key to Continue...")


def sold_products_menu(buy_product_customer_count, buy_product_customer_name, buy_product_customer_phone_number, buy_product_name, buy_product_price, buy_product_payment):
    if buy_product_customer_count == 0:
        print("\t\t No Product has been purchased till now...")

    print("\t\t Products Purchased :", buy_product_customer_count)
    print(" "+ "{:<10}".format("SrNo.") + "{:<20}".format("Name") + "{:<20}".format("Phone Number") + "{:<20}".format("Product Name") +
          "{:<20}".format("Product Price") + "{:<20}".format("Payment Method"))
    for x in range(buy_product_customer_count):
        print(" "+ "{:<10}".format(x + 1) + "{:<20}".format(buy_product_customer_name[x]) +
              "{:<20}".format(buy_product_customer_phone_number[x]) + "{:<20}".format(buy_product_name[x]) +
              "{:<20}".format(buy_product_price[x]) + "{:<20}".format(buy_product_payment[x]))

    print("\n\t\t Press any key to Continue...")


def view_employees_menu(employees):
    print("\033[1;32m")
    print (employees)
    # if employee_count == 0:
    #     print("\t\t No Employees Added Yet.")
    # else:
    #     print(" "+ "{:<15}".format("SrNo.") + "{:<30}".format("Name") + "{:<30}".format("Username") +
    #           "{:<30}".format("Mobile Number") + "{:<30}".format("CNIC") + "{:<30}".format("Salary"))
    #     for x in range(employee_count):
    #         print(" "+ "{:<15}".format(x + 1) + "{:<30}".format(employee_name[x]) +
    #               "{:<30}".format(employee_username[x]) + "{:<30}".format(employee_phone_number[x]) +
    #               "{:<30}".format(employee_cnic[x]) + "{:<30}".format(employee_salary[x]))
    print("\033[90m")
    print("\n\t\t Press any key to continue...")
    input()


def manage_employee_menu():
    option = ""
    print("\033[1;32m")
    print("\t\t Choose what you want to do.... \n\n")
    print("\033[1;36m")
    print("\t\t\t 1) Add an Employee\n")
    print("\t\t\t 2) Update Employee Details\n")
    print("\t\t\t 3) Remove an Employee\n")
    print("\t\t\t 4) Update Employee Salary\n")
    print("\t\t\t 5) Go Back\n\n")
    print("\033[90m")
    option = input("\t\t Enter Your Option (1-5): ")
    return option


def add_employee_menu(employees):
    eligible = False
    
    print("\033[0;36m")

    print("\n\t\t\t Enter Employee Full Name: ", end="")
    name = nameValidation(15, 1)
    print("\n\t\t\t Enter Employee User Name (4-10 characters): ", end="")
    username = usernameValidation(10, 4)
    print("\n\t\t\t Enter Employee Password (4-10 characters): ", end="")
    password = passwordValidation(10, 4)
    print("\n\t\t\t Enter Employee Mobile Number (11 digits): ", end="")
    number = numberValidation(11, 11)
    print("\n\t\t\t Enter Employee CNIC (13 digits): ", end="")
    cnic = numberValidation(13, 13)
    print("\n\t\t\t Enter Employee Salary (4-7 digits): ", end="")
    salary = numberValidation(7, 4)

    data = [name,username,password,number,cnic,salary]

    employees.loc[len(employees.index)] = data

    # eligible = check_account_eligibility(manager_username, manager_count)
    return employees


def update_employee_details_menu(employee_count, employee_username, employee_password, employee_name, employee_phone_number, employee_cnic):
    check = False
    name = input("\t\t\t Enter Username of the Employee you want to Update: ")

    for x in range(employee_count):
        if name == employee_username[x]:
            index = x
            check = True

    if not check:
        return "No Employee exists with this Username or Password..."

    print("\n\n\t\t Press Tab Key to Enter...\n\n")
    
    print("\t Details of the Employee before Update: \n\n")
    print(" ", end="")
    print(f"{employee_name[index]:<30}{employee_username[index]:<30}{employee_password[index]:<30}"
          f"{employee_phone_number[index]:<30}{employee_cnic[index]:<30}\n\n")

    print("\t\t\t Enter new Full Name: ", end="")
    employee_name[index] = nameValidation(15, 3)
    print("\n")
    
    print("\t\t\t Enter new User Name: ", end="")
    employee_username[index] = usernameValidation(10, 4)
    print("\n")

    print("\t\t\t Enter new Password: ", end="")
    employee_password[index] = passwordValidation(10, 4)
    print("\n")

    print("\t\t\t Enter new Mobile Number: ", end="")
    employee_phone_number[index] = numberValidation(11, 11)
    print("\n")

    print("\t\t\t Enter new CNIC: ", end="")
    employee_cnic[index] = numberValidation(13, 13)

    print("\n\n\t Details of the Employee after Update: \n\n")
    print(" ", end="")
    print(f"{employee_name[index]:<30}{employee_username[index]:<30}{employee_password[index]:<30}"
          f"{employee_phone_number[index]:<30}{employee_cnic[index]:<30}\n\n")

    print("\n\n\t\t Press any key to Continue...")
    input()

    return "Employee updated Successfully..."


def remove_employee_menu(employees):
    check = False
    print("\033[1;32m")
    name = input("\t\t\t Enter Username of the Employee you want to Remove: ")

    idx = employees[employees['Username'] == name].index
    employees = employees.drop(idx)
    # for x in range(employee_count):
    #     if name == employee_username[x]:
    #         index = x
    #         check = True

    # if not check:
    #     return "No Employee exists with this Username or Password..."

    # for y in range(index, employee_count - 1):
    #     employee_username[y] = employee_username[y + 1]
    #     employee_password[y] = employee_password[y + 1]
    #     employee_name[y] = employee_name[y + 1]
    #     employee_phone_number[y] = employee_phone_number[y + 1]
    #     employee_cnic[y] = employee_cnic[y + 1]
    #     employee_salary[y] = employee_salary[y + 1]

    # employee_count -= 1

    return employees


def update_employee_salary_menu(employee_count, employee_username, employee_password, employee_name, employee_salary):
    check = False
    name = input("\t\t\t Enter Username of the Employee you want to Update: ")

    for x in range(employee_count):
        if name == employee_username[x]:
            index = x
            check = True

    if not check:
        return "No Employee exists with this Username or Password..."

    print("\n" * 2)
    print("\t Salary of the Employee before Update: \n")
    print("  {:<30}{:<30}{:<30}".format("Name", "Username", "Salary"))
    print("  {:<30}{:<30}{:<30}".format(employee_name[index], employee_username[index], employee_salary[index]))
    
    new_salary = input("\n\t\t\t Enter new Salary: ")
    employee_salary[index] = new_salary

    print("\n" * 2)
    print("\t Salary of the Employee after Update: \n")
    print("  {:<30}{:<30}{:<30}".format("Name", "Username", "Salary"))
    print("  {:<30}{:<30}{:<30}".format(employee_name[index], employee_username[index], employee_salary[index]))

    print("\n" * 2)
    input("\t\t Press any key to Continue...")
    
    return "Employee updated Successfully..."


def service_details_menu(customer4service_count, customer4service_name, customer4service_username, service_vehicle_make, service_vehicle_name):
    if customer4service_count == 0:
        print("\t No Registrations Yet...\n\n")
    else:
        print("\t Details of the Customer Registered for Vehicle Service: \n\n")
        print("  {:<15}{:<30}{:<30}{:<30}{:<30}".format("SrNo.", "Customer Name", "Customer Username", "Vehicle Make", "Vehicle Name"))
        for x in range(customer4service_count):
            print("  {:<15}{:<30}{:<30}{:<30}{:<30}".format(x + 1, customer4service_name[x], customer4service_username[x], service_vehicle_make[x], service_vehicle_name[x]))

    print("\n" * 2)
    input("\t\t Press any key to continue...")


def test_drive_details_menu(customer4drive_count, customer4drive_name, customer4drive_username, customer4drive_vehicle):
    if customer4drive_count == 0:
        print("\t No Registrations Yet...\n\n")
    else:
        print("\t Details of the Customer Registered for Testing Drive: \n\n")
        print("  {:<15}{:<30}{:<30}{:<40}".format("SrNo.", "Customer Name", "Customer Username", "Vehicle Chosen"))
        for x in range(customer4drive_count):
            print("  {:<15}{:<30}{:<30}{:<40}".format(x + 1, customer4drive_name[x], customer4drive_username[x], customer4drive_vehicle[x]))

    print("\n" * 2)
    input("\t\t Press any key to continue...")


def communicate_employees_menu():
    option = input("\t\t Choose what you want to do.... \n\n"
                   "\t\t\t 1) Announce Important Message\n\n"
                   "\t\t\t 2) Message received by Employees\n\n"
                   "\t\t\t 3) Go Back\n\n"
                   "\t\t Enter Your Option (1-3): ")
    
    return option


def manager_announcements(manager_notices, manager_notices_count):
    print("\t\t Announce Important Message to Employees: \n\n")
    manager_notices.append(input("\t\t\t Your Announcement: "))
    manager_notices_count[0] += 1
    
    return "Your Message has been Delivered Successfully..."


def receive_employee_messages_menu(employee_name_list, employee_username_list, employee_messages_list, employee_messages_count):
    if employee_messages_count == 0:
        print("\t\t No messages received by any Employee yet.\n\n")
    elif employee_messages_count > 0:
        print("  {:<7} {:<10} {:<15} {:<10}".format("SrNo.", "Name", "UserName", "Message"))
        for x in range(employee_messages_count):
            print("  {:<7} {:<10} {:<15} {:<10}".format(x + 1, employee_name_list[x], employee_username_list[x], employee_messages_list[x]))

    print("\n\n")
    print("\t\t Press any key to continue...")


def employee_menu():
    option = ""
    print("\033[1;32m")
    print ("\t\t Choose what you want to do.... \n")
    print("\033[1;36m")
    print ("\t\t\t 1) Important Announcements\n")
    print ("\t\t\t 2) Contact to Manager\n")
    print ("\t\t\t 3) View Vehicle Details\n")
    print ("\t\t\t 4) View Associated Products Details\n")
    print ("\t\t\t 5) Sold Vehicles and Products\n")
    print ("\t\t\t 6) Scheduled Registrations for Service\n")
    print ("\t\t\t 7) Scheduled Registrations for Test Drives\n")
    print ("\t\t\t 8) Account Settings\n")
    print ("\t\t\t 9) Sign out\n")
    print ("\t\t\t10) Exit Application\n")
    print("\033[90m")
    option = input ("\t\t Enter Your Option (1-10): ")
    return option


def show_manager_announcements(manager_notices, manager_notices_count):
    if manager_notices_count == 0:
        print("\t\t No Announcements by Manager yet.\n")
    elif manager_notices_count > 0:
        print("\t Important Announcements by Manager are: \n")
        for x in range(manager_notices_count):
            print(f"  {x + 1} {manager_notices[x]}\n")

    input("\t\t Press any key to continue...")


def contact_manager_menu(employee_count, employee_name, employee_username, temporary_username, employee_name2, employee_username2, employee_messages, employee_messages_count):
    index = None
    for x in range(employee_count):
        if temporary_username == employee_username[x]:
            index = x

    employee_name2[employee_messages_count] = employee_name[index]
    employee_username2[employee_messages_count] = employee_username[index]

    print("\t\t Deliver your message to Manager... \n")

    print("\t\t\tEnter your Message: ", end="")
    employee_messages[employee_messages_count] = input()

    employee_messages_count += 1
    return "Your message has been delivered to the Manager Successfully..."


def account_setting_menu():
    print("\033[1;32m")
    print("\t\t Choose what you want to change.... \n")
    print("\033[1;36m")
    print("\t\t\t 1) Name\n")
    print("\t\t\t 2) Username\n")
    print("\t\t\t 3) Password\n")
    print("\t\t\t 4) Mobile Number\n")
    print("\t\t\t 5) CNIC\n")
    print("\t\t\t 6) Go Back\n")
    print("\033[90m")
    option = input("\t\t Enter Your Option (1-6): ")
    return option


def change_profile(count, username, temporary_username, data, message):
    index = None
    for x in range(count):
        if temporary_username == username[x]:
            index = x

    print("\t\t Press Tab Key to Enter...\n\n\n")
    print("\t\t Your old " + message + ": " + str(data[index]) + "\n\n\n")
    print("\t\t  Enter Your new " + message + ": \n")
    print("\t\t ************************************************************************\n\t\t  ", end="")
    data[index] = usernameValidation(10, 3)
    print("\n\t\t ************************************************************************\n\n")
    print("\t\t Your New " + message + ": " + str(data[index]) + "\n\n\n")

    input("\t\t Press any key to Continue...")

    return "Your " + message + " updated Successfully..."


def change_username(count, usernames, temporary_username, message):
    index = None
    temp = ""
    check = True
    for x in range(count):
        if temporary_username == usernames[x]:
            index = x

    print("\t\t Press Tab Key to Enter...(4-10 characters)\n\n\n")
    print("\t\t Your old " + message + ": " + str(usernames[index]) + "\n\n\n")
    usernames[index] = "-"

    print("\t\t  Enter Your new " + message + ": \n")
    print("\t\t ************************************************************************\n\t\t  ", end="")
    temp = usernameValidation(10, 4)
    print("\n\t\t ************************************************************************\n\n")

    for x in range(count):
        if temp == usernames[x]:
            check = False

    if not check:
        usernames[index] = temporary_username
        print("\t\t Username already exists!!\n\n")
        print("\n\n")
        input("\t\t Press any key to Continue...")
        return "Please try again!!"

    usernames[index] = temp
    print("\t\t Your New " + message + ": " + str(usernames[index]) + "\n\n\n")

    input("\t\t Press any key to Continue...")

    return "Your " + message + " updated Successfully..."


def customer_menu():
    option = ""
    print("\033[1;32m")
    print("\t\t Choose what you want to do....\n\n")
    print("\033[1;36m")
    print ("\t\t\t 1) View Vehicles\n")
    print ("\t\t\t 2) Buy Vehicle\n")
    print ("\t\t\t 3) View Accessories and Products\n")
    print ("\t\t\t 4) Buy Associated Products\n")
    print ("\t\t\t 5) Register your Car for Service\n")
    print ("\t\t\t 6) Register for Test Drive\n")
    print ("\t\t\t 7) Add comments or Suggestions\n")
    print ("\t\t\t 8) Account Settings\n")
    print ("\t\t\t 9) Sign out\n")
    print ("\t\t\t10) Exit Application\n")
    print("\033[90m")
    option = input("\t\t Enter Your Option (1-10): ")
    return option

def buy_product_menu(message):
    option = ""

    print("\033[1;32m")
    print("\t\t Follow Step by Step Procedure to Buy Your Desired {}... ".format(message))
    print("\033[1;36m")
    print("\n\t\t\t 1) Choose {}".format(message))
    print("\n\t\t\t 2) Choose Payment Method")
    print("\n\t\t\t 3) Print Bill")
    print("\n\t\t\t 4) Go Back")
    
    print("\033[1;90m")
    option = input("\n\t\t Enter Your Option (1-4): ")
    
    return option


def choose_vehicle_menu(vehicles):
    
    print("\033[1;32m")
    temp = input ("\t Enter the Name of the Vehicle you want to Buy: ")

    print("\033[1;36m")
    print (vehicles[vehicles['Name']== temp])

    print("\033[1;32m")
    option = input ('\n\t Do you really want to buy this Vehicle? (Y / N) : ')

    print("\033[1;37m")
    print ("\t\tVehicle Selected Successfully. Please Select the payment method now!!")
    print ("\t\tPress any key to continue...")
    input ()


def payment_method_menu ():
    print("\033[1;32m")
    print("\t\t Select Payment method..")
    print("\033[1;36m")
    print("\n\t\t\t 1) Immediate Cash Payment")
    print("\n\t\t\t 2) Payment by Credit Card")
    print("\n\t\t\t 3) Transfer Amount by Bank")
    print("\n\t\t\t 4) Go Back")
    
    print("\033[1;90m")
    option = input("\n\t\t Enter Your Option (1-4): ")
    
    if option == "1":
        print("\t\t Payment Method has been set to Immediate Cash Payment Successfully!")

    elif option == "2":
        print("\t\t Payment Method has been set to Payment by Credit Card Successfully!")
    
    elif option == "3":
        print("\t\t Payment Method has been set to Transfer Amount by Bank Successfully!")

    print ("\t\tSubmit the Bill to Proceed!")
    print ("\t\tpress any key to continue..")

    input()



# def print_bill():



def checkUser (username, password, usernameArr, passwordArr, count):
    for x in count:
        if (usernameArr[x] == username and passwordArr[x] == password):
            return True
    
    return False


def get_manager_data ():
    managers = pd.read_csv('managers_data.csv')
    return managers

def get_employee_data ():
    employees = pd.read_csv('employees_data.csv')
    return employees

def get_customer_data ():
    customers = pd.read_csv('customers_data.csv')
    return customers

def get_vehicle_data ():
    vehicles = pd.read_csv('vehicles_data.csv')
    return vehicles

def get_products_data ():
    products = pd.read_csv('products_data.csv')
    return products

def get_comments_data ():
    comments = pd.read_csv('comments_data.csv')
    return comments


def store_data (dataframe, filename):
    dataframe.to_csv(filename, index = False)



def numberValidation(maximum, minimum):
    item = ""
    # count = 0

    # while True:
    #     ch = msvcrt.getch().decode('utf-8')
        
    #     if ch.isdigit() and count <= maximum:
    #         print(ch, end="")
    #         item += ch
    #         count += 1
    #     elif ord(ch) == 9 and count >= minimum:        # 9 for Tab key
    #         break
    #     elif ch == '\b':
    #         if item:
    #             print("\b \b", end="")
    #             item = item[:-1]
    #             count -= 1

    item = input ()

    return item

def passwordValidation(maximum, minimum):
    item = ""
    # count = 0

    # while True:
    #     ch = msvcrt.getch().decode('utf-8')
        
    #     if ch.isalnum() and count <= maximum:
    #         print("\r*")
    #         item += ch
    #         count += 1
    #     elif ord(ch) == 9 and count >= minimum:        # 9 for Tab key
    #         break
    #     elif ch == '\b':
    #         if item:
    #             print("\r\b \b")
    #             item = item[:-1]
    #             count -= 1
    item = input ()

    return item

def usernameValidation(maximum, minimum):
    item = ""
    # count = 0

    # while True:
    #     ch = msvcrt.getch().decode('utf-8')
        
    #     if ch.isalnum() and count <= maximum:
    #         print(ch)
    #         item += ch
    #         count += 1
    #     elif ord(ch) == 9 and count >= minimum:        # 9 for Tab key
    #         break
    #     elif ch == '\b':
    #         if item:
    #             print("\b \b", end="")
    #             item = item[:-1]
    #             count -= 1
    item = input ()

    return item

def nameValidation(maximum, minimum):
    item = ""
    # count = 0

    # while True:
    #     ch = msvcrt.getch().decode('utf-8')
        
    #     if ch.isalpha() and count <= maximum:
    #         print(ch, end="")
    #         item += ch
    #         count += 1
    #     elif ord(ch) == 9 and count >= minimum:        # 9 for Tab key
    #         break
    #     elif ch == '\b':
    #         if item:
    #             print("\b \b", end="")
    #             item = item[:-1]
    #             count -= 1

    item = input ()

    return item






if __name__ == "__main__":
    main()
        