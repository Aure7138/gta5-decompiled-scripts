#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x76BF814AB8D4CAB8(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xB03A1684359C50A1(uLocal_2, 1))
	{
		if (!unk_0xB03A1684359C50A1(uLocal_2, 0))
		{
			if (unk_0x31F12808DC47A9E5(uLocal_0))
			{
				if (unk_0xC4B84EB67F78C1F0(uLocal_0, 0))
				{
					unk_0x337F2213526139E0(uLocal_0, 0, 1);
					unk_0x73D7E57BF0ED7FEB(uLocal_0, 1);
					unk_0x8BA533846256EA8E(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x31F12808DC47A9E5(uLocal_1))
					{
						unk_0x337F2213526139E0(uLocal_1, 0, 1);
						unk_0x73D7E57BF0ED7FEB(uLocal_1, 1);
						unk_0x8BA533846256EA8E(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xD2A9C3F486236CC5(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0xC4B84EB67F78C1F0(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xD2A9C3F486236CC5(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x3AAE8FF7FB37F69E(uLocal_0))
				{
					unk_0xD2A9C3F486236CC5(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x4F5FF3F3FDCAB15D(&uLocal_0);
	unk_0xE13BCCF275C3DEAF(&uLocal_1);
	unk_0x810C5D6462DD69E6();
}

