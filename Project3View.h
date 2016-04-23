
// Project3View.h : interface of the CProject3View class
//

#pragma once


class CProject3View : public CView
{
protected: // create from serialization only
	CProject3View();
	DECLARE_DYNCREATE(CProject3View)

// Attributes
public:
	CProject3Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CProject3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Project3View.cpp
inline CProject3Doc* CProject3View::GetDocument() const
   { return reinterpret_cast<CProject3Doc*>(m_pDocument); }
#endif

