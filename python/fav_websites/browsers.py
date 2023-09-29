#Make your module that contain favourite websites and have function called Firefox take url and open website 
import webbrowser

fav_websites = {"canve": "https://www.canva.com/",
                "facebook": "https://www.facebook.com/",
                "twitter":"https://twitter.com/home?lang=en"}

def Firefox(url):
    webbrowser.open(url)
    
