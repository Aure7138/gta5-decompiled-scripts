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
	unk_0x82706E6C897B0FA1();
}

void func_1(int iParam0)
{
	if (unk_0x72C5C2B71EEF88BD("DISPLAY_DATA_SLOT"))
	{
		unk_0x26221D1D76579618(iParam0);
		unk_0xD3DF251F2DF3B257();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0x72C5C2B71EEF88BD("SET_DATA_SLOT"))
	{
		unk_0x26221D1D76579618(iParam0);
		unk_0x26221D1D76579618(iParam1);
		unk_0x26221D1D76579618(iParam2);
		unk_0x26221D1D76579618(iParam3);
		unk_0x26221D1D76579618(iParam7);
		unk_0x26221D1D76579618(0);
		if (bParam4)
		{
			unk_0x26221D1D76579618(1);
		}
		else
		{
			unk_0x26221D1D76579618(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0xB51F3A5C13620EE6(sParam5);
		}
		unk_0xD3DF251F2DF3B257();
	}
}

void func_3(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

