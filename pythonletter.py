import smtplib
from email.mime.multipart import MIMEMultipart
from email.header import Header
from email.mime.text import MIMEText
from email.mime.image import MIMEImage
qqMail = smtplib.SMTP_SSL("smtp.sina.com", 465)
mailuser = "18305078225m@sina.cn"
mailpass = "8631602956c57c6a"
qqMail.login(mailuser,mailpass)
sender = "18305078225m@sina.cn"
recriver = "yequbiancheng@baicizhan.com"
message = MIMEMultipart()
message["Subject"] = Header("给夜曲的一封信--syl")
message["From"] = Header(f"syl<{sender}>")
message["To"] = Header(f"夜曲<{recriver}>")
textContext = "夜曲你好，我是syl，今天是2026年8月16日，我想对你们说：\n\n我喜欢你们！"
mailContext = MIMEText(textContext,"plain","utf-8")
filePath = r"C:\Users\lenovo\Pictures\Screenshots\屏幕截图 2026-08-14 213206.png"
with open(filePath,"rb") as imageFile:
    fileContent = imageFile.read()
attachment = MIMEImage(fileContent)
attachment.add_header("Content-Disposition","attachment",filename="100/100.png")
message.attach(mailContext)
message.attach(attachment)
qqMail.sendmail(sender,recriver,message.as_string())
print("邮件发送成功！")