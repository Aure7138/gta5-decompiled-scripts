#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xBCA819F9975BEDFA(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x48B8265059381CD0(uLocal_2, 1))
	{
		if (!unk_0x48B8265059381CD0(uLocal_2, 0))
		{
			if (unk_0x23E9113C762466ED(uLocal_0))
			{
				if (unk_0x45CD66F0A131E554(uLocal_0, 0))
				{
					unk_0xF0F77C99098F999B(uLocal_0, 0, 1);
					unk_0x98F0FA127445E343(uLocal_0, 1);
					unk_0x4C44C1A3160350E2(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x23E9113C762466ED(uLocal_1))
					{
						unk_0xF0F77C99098F999B(uLocal_1, 0, 1);
						unk_0x98F0FA127445E343(uLocal_1, 1);
						unk_0x4C44C1A3160350E2(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xEB79FECD9022AAF0(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x45CD66F0A131E554(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xEB79FECD9022AAF0(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x1DCFA79E268F3EE5(uLocal_0))
				{
					unk_0xEB79FECD9022AAF0(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x921CF98C637B0043(&uLocal_0);
	unk_0x47C2619E72CEAA4F(&uLocal_1);
	unk_0x921053BAF754303D();
}

