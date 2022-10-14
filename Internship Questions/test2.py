mails = input("Enter Mails: ")
mails = mails.split()
mails.sort(reverse=True)
mail_dict = {}

for items in mails:
    domain = items.split('@')[1]
    mail_dict[domain] = items

for mail in mail_dict.values():
    # call sendmail(mail)
    print(mail)