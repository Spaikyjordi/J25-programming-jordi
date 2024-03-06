public class Book {
	private string title;
	private string author;
	private int numPag;
	private string ISBN;
	private boolean isInKorean;
	
	public Book () {
	this.title = "noTitle";				//made by Jord
	this.author = "anonimous author";
	this.numPag = 0;
	this.ISBN = "none";
	this.isInKorean = false;
	}
	
	public Book (String title, String author, int numPag, String ISBN, boolean isInKorean){
	   this.title=title;
       this.author=author;
       this.numPag=numPag;
       this.ISBN=ISBN;
       this.isInKorean=isInKorean;
	}	
	
	//getters
	public String getTitle() {
    return this.title; 
	}

	public String getAuthor() {
    return this.author; 
	}

	public int getNumPag() {
		return this.numPag; 
	}

	public String getISBN() {
		return this.ISBN; 
	}

	public boolean isInKorean() {
		return this.isInKorean; 
	}
	
	//setters
	public void setTitle(String title) {
		this.title = title; 
	}

	public void setAuthor(String author) {
		this.author = author; 
	}

	public void setPages(int numPag) {
		this.numPag = numPag; 
	}

	public void setISBN(String ISBN) {
		this.ISBN = ISBN; 
	}

	public void setInKorean(boolean isInKorean) {
		this.isInKorean = isInKorean; 
	}
}	
