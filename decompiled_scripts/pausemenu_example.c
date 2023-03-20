#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				unk_0x4EDE34FBADD967A6(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0x7C3AA2D27E16E2AD();
}

void func_1(int iParam0)
{
	if (unk_0xA9823121D42FD9B6("DISPLAY_DATA_SLOT"))
	{
		unk_0xD2DC8221939F80F7(iParam0);
		unk_0x7E5FA681CB7A2EF7();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0xA9823121D42FD9B6("SET_DATA_SLOT"))
	{
		unk_0xD2DC8221939F80F7(iParam0);
		unk_0xD2DC8221939F80F7(iParam1);
		unk_0xD2DC8221939F80F7(iParam2);
		unk_0xD2DC8221939F80F7(iParam3);
		unk_0xD2DC8221939F80F7(iParam7);
		unk_0xD2DC8221939F80F7(0);
		if (bParam4)
		{
			unk_0xD2DC8221939F80F7(1);
		}
		else
		{
			unk_0xD2DC8221939F80F7(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x238A63F9EFBCDF35(sParam5);
		}
		unk_0x7E5FA681CB7A2EF7();
	}
}

void func_3(var uParam0)
{
	unk_0x37B602106C6E0E91(uParam0);
	unk_0xD3076D52458B36EF();
}

