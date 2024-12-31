import requests
from bs4 import BeautifulSoup

URL = "https://realpython.github.io/fake-jobs/"
page = requests.get(URL)
soup = BeautifulSoup(page.content, 'html.parser')
results = soup.find(id = "ResultsContainer")

# job_elements = results.find_all("div", class_= 'card-content')
# for job_element in job_elements:
#     title_element = job_element.find("h2", class_ = "title is-5")
#     company_element = job_element.find("h3", class_ = "subtitle is-6 company")
#     location_element = job_element.find("p", class_ = "location") 
#     print(title_element.text.strip())
#     print(company_element.text.strip())
#     print(location_element.text.strip(), end = "\n"*2)

python_jobs = results.find_all("h2", string = lambda text: 'python' in text.lower())
python_job_elements = [python_job.parent.parent.parent for python_job in python_jobs]

for job_element in python_job_elements:
    title_element = job_element.find("h2", class_ = "title is-5")
    company_element = job_element.find("h3", class_ = "subtitle is-6 company")
    location_element = job_element.find("p", class_ = "location")
    print(title_element.text.strip())
    print(company_element.text.strip())
    print(location_element.text.strip())

    links = job_element.find_all('a')[1]['href']
    print(links)
    # for link in links:
    #     link_url = link['href']
    #     print(link_url)

    print()