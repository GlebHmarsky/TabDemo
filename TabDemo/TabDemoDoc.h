
// TabDemoDoc.h : interface of the CTabDemoDoc class
//


#pragma once
enum { JUSTIFY_LEFT, JUSTIFY_CENTER, JUSTIFY_RIGHT };
enum { PITCH_VARIABLE, PITCH_FIXED };


class CTabDemoDoc : public CDocument
{
public:
	BOOL m_Bold;
	BOOL m_Italic;
	BOOL m_Underline;
	int m_Justify;
	int m_Pitch;
	int m_Spacing;

protected: // create from serialization only
	CTabDemoDoc() noexcept;
	DECLARE_DYNCREATE(CTabDemoDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CTabDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	afx_msg void OnTextFormat();
};
