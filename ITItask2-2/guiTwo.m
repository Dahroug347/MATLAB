function varargout = guiTwo(varargin)
% GUITWO MATLAB code for guiTwo.fig
%      GUITWO, by itself, creates a new GUITWO or raises the existing
%      singleton*.
%
%      H = GUITWO returns the handle to a new GUITWO or the handle to
%      the existing singleton*.
%
%      GUITWO('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GUITWO.M with the given input arguments.
%
%      GUITWO('Property','Value',...) creates a new GUITWO or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before guiTwo_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to guiTwo_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help guiTwo

% Last Modified by GUIDE v2.5 24-Jan-2022 11:32:45

% Begin initialization code - DO NOT EDIT
global w
global z
global x
global y
global vResult
global func
global error1
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @guiTwo_OpeningFcn, ...
                   'gui_OutputFcn',  @guiTwo_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before guiTwo is made visible.
function guiTwo_OpeningFcn(hObject, eventdata, handles, varargin)

% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to guiTwo (see VARARGIN)

% Choose default command line output for guiTwo
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes guiTwo wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = guiTwo_OutputFcn(hObject, eventdata, handles) 

% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function AppName_Callback(hObject, eventdata, handles)
% hObject    handle to AppName (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of AppName as text
%        str2double(get(hObject,'String')) returns contents of AppName as a double


% --- Executes during object creation, after setting all properties.
function AppName_CreateFcn(hObject, eventdata, handles)
% hObject    handle to AppName (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function errCon_Callback(hObject, eventdata, handles)
% hObject    handle to errCon (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of errCon as text
%        str2double(get(hObject,'String')) returns contents of errCon as a double


% --- Executes during object creation, after setting all properties.
function errCon_CreateFcn(hObject, eventdata, handles)
% hObject    handle to errCon (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function errMsg_Callback(hObject, eventdata, handles)
% hObject    handle to errMsg (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of errMsg as text
%        str2double(get(hObject,'String')) returns contents of errMsg as a double


% --- Executes during object creation, after setting all properties.
function errMsg_CreateFcn(hObject, eventdata, handles)
% hObject    handle to errMsg (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function op1_Callback(hObject, eventdata, handles)
% hObject    handle to op1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of op1 as text
%        str2double(get(hObject,'String')) returns contents of op1 as a double


% --- Executes during object creation, after setting all properties.
function op1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to op1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function operand_Callback(hObject, eventdata, handles)
    
        
% hObject    handle to operand (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of operand as text
%        str2double(get(hObject,'String')) returns contents of operand as a double


% --- Executes during object creation, after setting all properties.
function operand_CreateFcn(hObject, eventdata, handles)


    
% hObject    handle to operand (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function op2_Callback(hObject, eventdata, handles)
% hObject    handle to op2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of op2 as text
%        str2double(get(hObject,'String')) returns contents of op2 as a double


% --- Executes during object creation, after setting all properties.
function op2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to op2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function equal_Callback(hObject, eventdata, handles)
% hObject    handle to equal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of equal as text
%        str2double(get(hObject,'String')) returns contents of equal as a double


% --- Executes during object creation, after setting all properties.
function equal_CreateFcn(hObject, eventdata, handles)
% hObject    handle to equal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function result_Callback(hObject, eventdata, handles)
% hObject    handle to result (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of result as text
%        str2double(get(hObject,'String')) returns contents of result as a double


% --- Executes during object creation, after setting all properties.
function result_CreateFcn(hObject, eventdata, handles)
% hObject    handle to result (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function arthOp_Callback(hObject, eventdata, handles)
% hObject    handle to arthOp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of arthOp as text
%        str2double(get(hObject,'String')) returns contents of arthOp as a double


% --- Executes during object creation, after setting all properties.
function arthOp_CreateFcn(hObject, eventdata, handles)
% hObject    handle to arthOp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in NorOpList.
function NorOpList_Callback(hObject, eventdata, handles)
    global w;
     d = cellstr(get(hObject, 'String'));
     w = d{get(hObject, 'value')};
     set(handles.operand, 'String', w);
% hObject    handle to NorOpList (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns NorOpList contents as cell array
%        contents{get(hObject,'Value')} returns selected item from NorOpList


% --- Executes during object creation, after setting all properties.
function NorOpList_CreateFcn(hObject, eventdata, handles)
% hObject    handle to NorOpList (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in equButton.
function equButton_Callback(hObject, eventdata, handles)
    global w;
    global error1
    set(handles.errMsg, 'String', " ")
    set(handles.result, 'String', " ")
    switch w
        case '+'
            result = str2double(handles.op1.String) + str2double(handles.op2.String)        
        case '-'
            result = str2double(handles.op1.String) - str2double(handles.op2.String)          
        case '*'
            result = str2double(handles.op1.String) * str2double(handles.op2.String)      
        case '/'
            if str2double(handles.op2.String) == 0
                result = 0
                error1 = 1
                set(handles.errMsg, 'String', "undefined value cannot divide on 0")
            else    
                result = str2double(handles.op1.String) / str2double(handles.op2.String)
            end
    end 
    
    if  isnan(result)
        result = " "
        set(handles.errMsg, 'String', "error typing letters")
        
    elseif result == 0 & error1 == 1
        error1 = 0
        result = " "
    end 
    
    set(handles.result, 'String', result) 
    

   
    
% hObject    handle to equButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function funCon_Callback(hObject, eventdata, handles)
% hObject    handle to funCon (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of funCon as text
%        str2double(get(hObject,'String')) returns contents of funCon as a double


% --- Executes during object creation, after setting all properties.
function funCon_CreateFcn(hObject, eventdata, handles)
% hObject    handle to funCon (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function operator_Callback(hObject, eventdata, handles)
% hObject    handle to operator (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of operator as text
%        str2double(get(hObject,'String')) returns contents of operator as a double


% --- Executes during object creation, after setting all properties.
function operator_CreateFcn(hObject, eventdata, handles)
% hObject    handle to operator (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in VectOpList.
function VectOpList_Callback(hObject, eventdata, handles)
    global z;
     d = cellstr(get(hObject, 'String'));
     z = d{get(hObject, 'value')};
     set(handles.operator, 'String', z);
% hObject    handle to VectOpList (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns VectOpList contents as cell array
%        contents{get(hObject,'Value')} returns selected item from VectOpList


% --- Executes during object creation, after setting all properties.
function VectOpList_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VectOpList (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function VectOp1_Callback(hObject, eventdata, handles)
% hObject    handle to VectOp1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of VectOp1 as text
%        str2double(get(hObject,'String')) returns contents of VectOp1 as a double


% --- Executes during object creation, after setting all properties.
function VectOp1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VectOp1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function VectOp2_Callback(hObject, eventdata, handles)
% hObject    handle to VectOp2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of VectOp2 as text
%        str2double(get(hObject,'String')) returns contents of VectOp2 as a double


% --- Executes during object creation, after setting all properties.
function VectOp2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VectOp2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in VectEquButton.
function VectEquButton_Callback(hObject, eventdata, handles)
    global x
    global y
    global vResult
    s = handles.VectOp1.String;
    d = handles.VectOp2.String;
    
    x = str2double(strsplit(s, ' '))
    y = str2double(strsplit(d, ' '))

    global z;
    global error1
    
    vResult = " "
    set(handles.VectResOp, 'String' ," ")
    set(handles.edit16, 'String', " ")
    
   [ax, bx] = size(x)
   [ay, by] = size(y)
   
    if  bx ~= by
     vResult = 0
     error1 = 2
     set(handles.VectResOp, 'String' ," ")
     set(handles.edit16, 'String', "unequal size !!")
    else
    switch z
        case '+'
            vResult = x + y       
        case '-'
            vResult = x - y         
        case '*'
            vResult = x .* y       
        case '/'
            if any(y(:) == 0) 
                vResult = 0
                error1 = 2
                set(handles.edit16, 'String', "undefined value cannot divide on 0")
            else    
                vResult = x ./ y 
                set(handles.edit16, 'String', " ")
            end
    end
    end
    
    if max(isnan(vResult))
        vResult = " "
        error1 = 2
        set(handles.edit16, 'String', "error typing letters")
    
    elseif vResult == 0 & error1 == 2
        error1 = 0
        vResult = " "
    end  
    
    set(handles.VectResOp, 'String' ,num2str(vResult))
    


     
    
% hObject    handle to VectEquButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB



function resultBanner_Callback(hObject, eventdata, handles)
% hObject    handle to resultBanner (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of resultBanner as text
%        str2double(get(hObject,'String')) returns contents of resultBanner as a double


% --- Executes during object creation, after setting all properties.
function resultBanner_CreateFcn(hObject, eventdata, handles)
% hObject    handle to resultBanner (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function VectResOp_Callback(hObject, eventdata, handles)
% hObject    handle to VectResOp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of VectResOp as text
%        str2double(get(hObject,'String')) returns contents of VectResOp as a double


% --- Executes during object creation, after setting all properties.
function VectResOp_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VectResOp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit16_Callback(hObject, eventdata, handles)
% hObject    handle to edit16 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit16 as text
%        str2double(get(hObject,'String')) returns contents of edit16 as a double


% --- Executes during object creation, after setting all properties.
function edit16_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit16 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in RXAxis.
function RXAxis_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
disp(handles.uibuttongroup1.SelectedObject.String)
% hObject    handle to RXAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of RXAxis



% --- Executes on button press in RYAxis.
function RYAxis_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
% hObject    handle to RYAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of RYAxis


% --- Executes on button press in RXYAxis.
function RXYAxis_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
% hObject    handle to RXYAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of RXYAxis


% --- Executes on button press in resultant.
function resultant_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
% hObject    handle to resultant (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of resultant


% --- Executes on button press in sin.
function sin_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
% hObject    handle to sin (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of sin


% --- Executes on button press in cosine.
function cosine_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
% hObject    handle to cosine (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of cosine


% --- Executes on button press in vectEquation.
function vectEquation_Callback(hObject, eventdata, handles)
global func
func = handles.uibuttongroup1.SelectedObject.String;
% hObject    handle to vectEquation (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of vectEquation


% --- Executes on button press in delete.
function delete_Callback(hObject, eventdata, handles)
cla reset;
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in enter.
function enter_Callback(hObject, eventdata, handles)
lima = 0
limb = 100
global x
global y
global vResult
global func
    switch (func)
         case 'X_axis'
             axes(handles.axes1);
             plot(x);
             %xlim([lima limb])
             
         case 'Y_axis'
             axes(handles.axes1);
             plot(y);
             %xlim([lima limb])
             
         case 'XY_axis'
             axes(handles.axes1);
             plot(x,y);
             %xlim([lima limb])
             
         case 'resultant'
             axes(handles.axes1);
             plot(vResult);
             %xlim([lima limb])
             
         case 'sin'
             axes(handles.axes1);
             a = 0:0.1:100
             plot(sin(pi*a));
             xlim([lima limb])
             
         case 'cosine'
             axes(handles.axes1);
             a = [0:0.1:100]
             plot(cos(pi*a));
             xlim([lima limb])
             
         case 'equation'
             axes(handles.axes1);
             ezplot(handles.funCon.String);
             %xlim([lima limb])                  
    end         
             
                
% hObject    handle to enter (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
