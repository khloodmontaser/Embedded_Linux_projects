import requests
link = requests.get("https://api.ipify.org/?format=json")
ip = link.json()
IP = ip['ip']
loc = requests.get(f'https://ipapi.co/{IP}/json/').json()

print (IP)
print (loc)
