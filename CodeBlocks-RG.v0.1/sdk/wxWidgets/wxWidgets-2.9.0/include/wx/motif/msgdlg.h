/////////////////////////////////////////////////////////////////////////////
// Name:        wx/motif/msgdlg.h
// Purpose:     wxMessageDialog class. Use generic version if no
//              platform-specific implementation.
// Author:      Julian Smart
// Modified by:
// Created:     17/09/98
// RCS-ID:      $Id: msgdlg.h 52834 2008-03-26 15:06:00Z FM $
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_MSGBOXDLG_H_
#define _WX_MSGBOXDLG_H_

// ----------------------------------------------------------------------------
// Message box dialog
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxMessageDialog : public wxMessageDialogBase
{
public:
    wxMessageDialog(wxWindow *parent,
                    const wxString& message,
                    const wxString& caption = wxMessageBoxCaptionStr,
                    long style = wxOK | wxCENTRE,
                    const wxPoint& WXUNUSED(pos) = wxDefaultPosition)
        : wxMessageDialogBase(parent, message, caption, style)
    {
    }

    virtual int ShowModal();

    // implementation only from now on
    // called by the Motif callback
    void SetResult(long result) { m_result = result; }

protected:
    long        m_result;

    DECLARE_DYNAMIC_CLASS(wxMessageDialog)
};

#endif // _WX_MSGBOXDLG_H_
