#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x5EBD03AF78E7B4DB(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x05EFB6A616B6FADE(uLocal_2, 1))
	{
		if (!unk_0x05EFB6A616B6FADE(uLocal_2, 0))
		{
			if (unk_0xDC5D81351D6A4DDB(uLocal_0))
			{
				if (unk_0x1095F403F52B42E1(uLocal_0, 0))
				{
					unk_0x1F7948851FB36E88(uLocal_0, 0, 1);
					unk_0xB29E08C7AB729BAD(uLocal_0, 1);
					unk_0xD6CDDEFB0FD5B191(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xDC5D81351D6A4DDB(uLocal_1))
					{
						unk_0x1F7948851FB36E88(uLocal_1, 0, 1);
						unk_0xB29E08C7AB729BAD(uLocal_1, 1);
						unk_0xD6CDDEFB0FD5B191(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x2BCFB39E86340DAA(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x1095F403F52B42E1(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x2BCFB39E86340DAA(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x1A8481A7E865EC7C(uLocal_0))
				{
					unk_0x2BCFB39E86340DAA(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x792676988A48387F(&uLocal_0);
	unk_0x69C8D2CAA0701F42(&uLocal_1);
	unk_0x8F1A9FE6D91AAFEB();
}

