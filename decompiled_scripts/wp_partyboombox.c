#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x7832F791572D5809(joaat("wp_partyboombox")) > 1)
	{
		unk_0xBEE2834559A8897A();
	}
	if (unk_0xB9B05E900D325C36(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x7FAAAEBD3B7CE5DA())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x41413FABD538FC3A() >= 22 || unk_0x41413FABD538FC3A() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xE6A94C903E0230BE("ID2_21_G_Night"))
				{
					unk_0x50FCFE42878E03C1("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x391103C96DB7B6E4() && !unk_0x003E46CBEF6CE07A())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xE6A94C903E0230BE("ID2_21_G_Night"))
	{
		unk_0x24F0CAC77C3B1EBE("ID2_21_G_Night");
	}
	unk_0xBEE2834559A8897A();
}

