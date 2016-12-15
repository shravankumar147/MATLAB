function varargout = servoPOS(varargin)
% SERVOPOS MATLAB code for servoPOS.fig
%      SERVOPOS, by itself, creates a new SERVOPOS or raises the existing
%      singleton*.
%
%      H = SERVOPOS returns the handle to a new SERVOPOS or the handle to
%      the existing singleton*.
%
%      SERVOPOS('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SERVOPOS.M with the given input arguments.
%
%      SERVOPOS('Property','Value',...) creates a new SERVOPOS or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before servoPOS_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to servoPOS_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help servoPOS

% Last Modified by GUIDE v2.5 01-Nov-2015 10:33:03

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @servoPOS_OpeningFcn, ...
                   'gui_OutputFcn',  @servoPOS_OutputFcn, ...
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


% --- Executes just before servoPOS is made visible.
function servoPOS_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to servoPOS (see VARARGIN)
a = arduino();
global s;
s = servo(a, 'D4', 'MinPulseDuration', 700*10^-6, 'MaxPulseDuration', 2300*10^-6);

% Choose default command line output for servoPOS
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes servoPOS wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = servoPOS_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function Position_Callback(hObject, eventdata, handles)
% hObject    handle to Position (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Position as text
%        str2double(get(hObject,'String')) returns contents of Position as a double
p = str2double(get(hObject,'String'));
global s;
writePosition(s, p)


% --- Executes during object creation, after setting all properties.
function Position_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Position (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
