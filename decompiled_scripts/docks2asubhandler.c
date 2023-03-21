#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x9EC5BDC006623C42(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x0E4018692D92041D(uLocal_2, 1))
	{
		if (!unk_0x0E4018692D92041D(uLocal_2, 0))
		{
			if (unk_0x765F6FEEFF39224F(uLocal_0))
			{
				if (unk_0x91D5C8283D19AF49(uLocal_0, 0))
				{
					unk_0x0D21E1FDE062ED99(uLocal_0, 0, 1);
					unk_0xF70578F5CD9822CB(uLocal_0, 1);
					unk_0x4D5F3407F1F37E28(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x765F6FEEFF39224F(uLocal_1))
					{
						unk_0x0D21E1FDE062ED99(uLocal_1, 0, 1);
						unk_0xF70578F5CD9822CB(uLocal_1, 1);
						unk_0x4D5F3407F1F37E28(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x8950ED5730F62EE8(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x91D5C8283D19AF49(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x8950ED5730F62EE8(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x3F219400E5FE4B69(uLocal_0))
				{
					unk_0x8950ED5730F62EE8(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x65F544B458249682(&uLocal_0);
	unk_0x4955686EF8308B47(&uLocal_1);
	unk_0x5894DC159447E10A();
}

