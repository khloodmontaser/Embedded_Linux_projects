#a code to suggest automatically activates for you 

import requests

x = requests.get("https://www.boredapi.com/api/activity")
data = x.json()

print(data['activity'])
